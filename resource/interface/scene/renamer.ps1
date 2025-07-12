# AI SLOP

# Store the path of this script to exclude it
$scriptPath = $MyInvocation.MyCommand.Path

# Handle files first
Get-ChildItem -Path ./unit_icon -Recurse -File | 
    Where-Object { $_.Name -like "uk-*" } | 
    ForEach-Object {
        $newName = $_.Name -replace '^uk-', 'np_'
        Rename-Item -Path $_.FullName -NewName $newName
    }

# Then handle folders (process from deepest to avoid path issues)
Get-ChildItem -Path ./unit_icon -Recurse -Directory | 
    Where-Object { $_.Name -like "uk-*" } | 
    Sort-Object -Property FullName -Descending |
    ForEach-Object {
        $newName = $_.Name -replace '^uk-', 'np_'
        Rename-Item -Path $_.FullName -NewName $newName
    }