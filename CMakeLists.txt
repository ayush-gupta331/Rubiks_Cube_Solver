cmake_minimum_required(VERSION 3.25)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled main.cpp generic_header_rubics.cpp generic_header_rubics.h RubiksCube3dArray.cpp RbiksCube3dArray.cpp DFSSolver.h RubicksCube1dArray.cpp BFSSolver.h)
