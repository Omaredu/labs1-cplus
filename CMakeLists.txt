cmake_minimum_required(VERSION 2.8.9)
project (laboratorio)

file(COPY "clima.celsius" DESTINATION "bin/")

set(EXECUTABLE_OUTPUT_PATH "bin")
set(SourceFiles labs1-2.cpp celsius/Celsius.hpp celsius/Celsius.cpp)

add_executable(areatriangulo ${SourceFiles})
target_compile_definitions(areatriangulo PUBLIC AREATRIANGULO)

add_executable(numerosprimoscero ${SourceFiles})
target_compile_definitions(numerosprimoscero PUBLIC NUMEROSPRIMONEGPOSCERO)

add_executable(promediosparesimpares ${SourceFiles})
target_compile_definitions(promediosparesimpares PUBLIC PROMEDIOSPARESIMPARES)

add_executable(cilindro ${SourceFiles})
target_compile_definitions(cilindro PUBLIC CILINDRO)

add_executable(totalapagar ${SourceFiles})
target_compile_definitions(totalapagar PUBLIC TOTALAPAGAR)

add_executable(meteorologia ${SourceFiles})
target_compile_definitions(meteorologia PUBLIC METEOROLOGIA)