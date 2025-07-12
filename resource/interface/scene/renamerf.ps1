# AI SLOP

Get-ChildItem -Path ./unit_icon -Recurse -File | 
    Where-Object { $_.Name -match '\(\(eng\)\)' } | 
    ForEach-Object {
        $newName = $_.Name -replace '\(\(eng\)\)', '(eng)'
        Rename-Item -Path $_.FullName -NewName $newName
    }