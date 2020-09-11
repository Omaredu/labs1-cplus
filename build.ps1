try {
    # Create /bin folder & copy clima.celsius file
    New-Item -Path . -Name bin -ItemType directory
    Copy-Item -Path .\clima.celsius -Destination .\bin\ -PassThru

    # Define variables (routes & source files)
    $SourceFiles = "labs1-2.cpp", "celsius/Celsius.hpp", "celsius/Celsius.cpp" 
    $TargetBinDirectory = "bin\"

    # Compile all files & definitions
    g++.exe $SourceFiles -o "$TargetBinDirectory Area_Triangulo" -DAREATRIANGULO -DWINDOWS
    g++.exe $SourceFiles -o "$TargetBinDirectory Numeros_Primos_Cero" -DNUMEROSPRIMONEGPOSCERO -DWINDOWS
    g++.exe $SourceFiles -o "$TargetBinDirectory Promedios_Pares_Impar" -DPROMEDIOSPARESIMPARES -DWINDOWS
    g++.exe $SourceFiles -o "$TargetBinDirectory Cilindro" -DCILINDRO -DWINDOWS
    g++.exe $SourceFiles -o "$TargetBinDirectory Total_A_Pagar" -DTOTALAPAGAR -DWINDOWS
    g++.exe $SourceFiles -o "$TargetBinDirectory Meteorologia" -DMETEOROLOGIA -DWINDOWS

    explorer.exe $TargetBinDirectory
} catch {
    Write-Error "Error realizando el proceso de compilación."
}