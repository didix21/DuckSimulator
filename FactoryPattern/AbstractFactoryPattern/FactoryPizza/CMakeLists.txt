# CMakeList.txt : CMake project for TestingCmake, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Include directories
include_directories (include)
include_directories (include/ingredients)
include_directories (include/pizzas)

# Add soource files
file (GLOB SOURCES "src/*.cpp" "src/ingredients/*.cpp" "src/pizzas/*.cpp")

# add the executable
add_executable (FactoryPizza ${SOURCES})