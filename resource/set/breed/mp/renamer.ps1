# AI SLOP

# Get all files in the current directory (adjust the pattern as needed)
Get-ChildItem -Path "." -Filter "*.set" -Recurse | ForEach-Object {
    $content = Get-Content $_.FullName -Raw
    
    # Replace us- prefix in item and head values
    $content = $content -replace '(\{item\s+")(us-)([^"]+")', '$1$3'
    $content = $content -replace '(\{head\s+")(us-)([^"]+")', '$1$3'
    
    # Replace uk- prefix in item and head values
    $content = $content -replace '(\{item\s+")(uk-)([^"]+")', '$1$3'
    $content = $content -replace '(\{head\s+")(uk-)([^"]+")', '$1$3'
    
    # Write the modified content back to the file
    $content | Set-Content $_.FullName
}