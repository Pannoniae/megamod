# AI SLOP

# Store the path of this script to exclude it
$scriptPath = $MyInvocation.MyCommand.Path

# Handle files first
Get-ChildItem -Path . -Recurse -File | 
    Where-Object { $_.Name -like "us-*" } | 
    ForEach-Object {
        $newName = $_.Name -replace '^us-', ''
        Rename-Item -Path $_.FullName -NewName $newName
    }

# Then handle folders (process from deepest to avoid path issues)
Get-ChildItem -Path . -Recurse -Directory | 
    Where-Object { $_.Name -like "us-*" } | 
    Sort-Object -Property FullName -Descending |
    ForEach-Object {
        $newName = $_.Name -replace '^us-', ''
        Rename-Item -Path $_.FullName -NewName $newName
    }

# Replace content only in specified file types
Get-ChildItem -Path . -Recurse -File -Include "*.def", "*.mdl", "*.inc", "*.mtl" | 
    Where-Object { $_.FullName -ne $scriptPath } |
    ForEach-Object {
        $content = Get-Content $_.FullName -Raw
        if ($content -match 'us-') {
            # Do the main replacement
            $content = $content -replace 'us-', ''
            Set-Content -Path $_.FullName -Value $content
        }
    }