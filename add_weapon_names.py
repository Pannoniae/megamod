#!/usr/bin/env python3
"""
Script to add weapon names to soldier localizations.
This script modifies soldier localization files to include the primary weapon name
in the soldier's display name.
"""

import os
import re
import glob
from pathlib import Path

# Weapon name overrides - custom names instead of localized names
WEAPON_OVERRIDES = {
    "k98": "K98",
    "kar98k": "K98",
    "mp40": "MP40",
    "stg44": "StG44",
    "mp44": "MP44",
    "mg42": "MG42",
    "mg34": "MG34",
    "pzf": "Panzerfaust",
    "panzerfaust": "Panzerfaust",
    "panzerschreck": "Panzerschreck",
    "flam": "Flammenwerfer",
    "flammenwerfer": "Flammenwerfer",
    "g43": "G43",
    "fg42": "FG42",
    "luger": "Luger",
    "walther": "Walther",
    "mauser": "Mauser",
    "gewehr": "Gewehr",
    "rifle": "Rifle",
    "smg": "SMG",
    "lmg": "LMG",
    "hmg": "HMG",
    "at": "AT",
    "rpg": "RPG",
    "grenade": "Grenade",
    "pistol": "Pistol",
    "scope": "Scoped",
    "sniper": "Sniper"
}

def get_weapon_localization(weapon_id, weapon_loc_files):
    """Get the localized name for a weapon ID."""
    for loc_file in weapon_loc_files:
        try:
            with open(loc_file, 'r', encoding='utf-8') as f:
                content = f.read()
                
            # Look for the weapon context
            pattern = rf'msgctxt "desc/weapon/{re.escape(weapon_id)}"\s*\nmsgid "([^"]+)"'
            match = re.search(pattern, content)
            if match:
                return match.group(1)
        except Exception as e:
            print(f"Error reading {loc_file}: {e}")
    
    return None

def get_primary_weapon_from_set(set_file_path):
    """Extract the primary weapon ID from a soldier set file."""
    try:
        with open(set_file_path, 'r', encoding='utf-8') as f:
            content = f.read()
        
        # Find the inventory block
        inventory_match = re.search(r'\{inventory\s*\n(.*?)\n\}', content, re.DOTALL)
        if not inventory_match:
            return None
        
        inventory_content = inventory_match.group(1)
        
        # Find the first item with "filled" (primary weapon)
        item_match = re.search(r'\{item\s+"([^"]+)"\s+filled\}', inventory_content)
        if item_match:
            return item_match.group(1)
        
        # If no "filled" item, get the first item that's not ammo/equipment
        lines = inventory_content.split('\n')
        for line in lines:
            item_match = re.search(r'\{item\s+"([^"]+)"', line)
            if item_match:
                item_name = item_match.group(1)
                # Skip common non-weapon items
                if not any(skip in item_name.lower() for skip in ['ammo', 'grenade', 'bandage', 'shovel', 'clip', 'belt']):
                    return item_name
        
        return None
    except Exception as e:
        print(f"Error reading set file {set_file_path}: {e}")
        return None

def get_soldier_id_from_set_path(set_file_path):
    """Extract soldier ID from set file path."""
    path = Path(set_file_path)
    # Remove .set extension
    soldier_id = path.stem
    
    # Build the full path pattern for localization
    parts = path.parts
    if 'breed' in parts:
        breed_index = parts.index('breed')
        if breed_index + 1 < len(parts):
            # Get the path after 'breed'
            breed_path = '/'.join(parts[breed_index + 1:-1])  # Exclude filename
            return f"desc/human/{breed_path}/{soldier_id}"
    
    return None

def get_weapon_display_name(weapon_id, weapon_loc_files):
    """Get the display name for a weapon, using override if available."""
    # Check overrides first
    weapon_lower = weapon_id.lower()
    for override_key, override_value in WEAPON_OVERRIDES.items():
        if override_key in weapon_lower:
            return override_value
    
    # Try to get localized name
    localized_name = get_weapon_localization(weapon_id, weapon_loc_files)
    if localized_name:
        return localized_name
    
    # Fallback to weapon ID
    return weapon_id.upper()

def process_soldier_localization_file(loc_file_path, weapon_loc_files, breed_dir):
    """Process a single soldier localization file."""
    try:
        with open(loc_file_path, 'r', encoding='utf-8') as f:
            content = f.read()
        
        # Find all soldier entries
        pattern = r'msgctxt "(desc/human/[^"]+)"\s*\nmsgid "([^"]+)"\s*\nmsgstr ""'
        matches = re.finditer(pattern, content)
        
        modified = False
        new_content = content
        
        for match in matches:
            soldier_context = match.group(1)
            current_name = match.group(2)
            
            # Skip if weapon name already added (contains brackets)
            if '[' in current_name and ']' in current_name:
                continue
            
            # Extract soldier ID and path from context
            soldier_path_parts = soldier_context.split('/')
            if len(soldier_path_parts) >= 3:
                soldier_id = soldier_path_parts[-1]
                soldier_subpath = '/'.join(soldier_path_parts[2:-1])  # Skip 'desc/human'
                
                # Find corresponding set file
                set_file_pattern = os.path.join(breed_dir, soldier_subpath, f"{soldier_id}.set")
                set_files = glob.glob(set_file_pattern)
                
                if set_files:
                    primary_weapon = get_primary_weapon_from_set(set_files[0])
                    if primary_weapon:
                        weapon_display_name = get_weapon_display_name(primary_weapon, weapon_loc_files)
                        new_name = f"{current_name} [{weapon_display_name}]"
                        
                        # Replace in content
                        old_entry = f'msgctxt "{soldier_context}"\nmsgid "{current_name}"\nmsgstr ""'
                        new_entry = f'msgctxt "{soldier_context}"\nmsgid "{new_name}"\nmsgstr ""'
                        new_content = new_content.replace(old_entry, new_entry)
                        modified = True
                        
                        print(f"Updated: {current_name} -> {new_name}")
        
        # Write back if modified
        if modified:
            with open(loc_file_path, 'w', encoding='utf-8') as f:
                f.write(new_content)
            print(f"Modified: {loc_file_path}")
        
    except Exception as e:
        print(f"Error processing {loc_file_path}: {e}")

def main():
    """Main function to process all soldier localization files."""
    # Get base directory
    base_dir = os.path.dirname(os.path.abspath(__file__))
    
    # Paths
    soldier_loc_dir = os.path.join(base_dir, "localizations", "default", "interface", "text", "desc")
    weapon_loc_dir = os.path.join(base_dir, "localizations", "default", "interface", "text", "desc")
    breed_dir = os.path.join(base_dir, "resource", "set", "breed")
    
    # Find all soldier localization files
    soldier_loc_files = glob.glob(os.path.join(soldier_loc_dir, "desc_breed_*.pot"))
    
    # Find all weapon localization files
    weapon_loc_files = glob.glob(os.path.join(weapon_loc_dir, "desc_weapon_*.pot"))
    
    if not soldier_loc_files:
        print("No soldier localization files found!")
        return
    
    if not weapon_loc_files:
        print("No weapon localization files found!")
        return
    
    print(f"Found {len(soldier_loc_files)} soldier localization files")
    print(f"Found {len(weapon_loc_files)} weapon localization files")
    
    # Process each soldier localization file
    for loc_file in soldier_loc_files:
        print(f"\nProcessing: {os.path.basename(loc_file)}")
        process_soldier_localization_file(loc_file, weapon_loc_files, breed_dir)
    
    print("\nDone!")

if __name__ == "__main__":
    main()