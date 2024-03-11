
# Generate from anywhere.
# C:\projects>cmake -G "MinGW Makefiles" -S c:\projects\C++prog\nomadcsoport -B c:\builds\nomadcsoport_b01
#
# Then in the build folder simply "make".

cmake_minimum_required(VERSION 3.5)

project(NomadCsoport)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 11)

# Add -Werror compiler option
add_compile_options(-g)
add_compile_options(-Wall)
add_compile_options(-Werror)

add_executable(csoport
   csoportoszto.cpp
   )
