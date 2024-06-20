#! /bin/bash

#var build_command = "cmake --build build"
#var build_binary = "cmake -B build"

echo "----------Building-------------------"
cmake --build build

cmake -B build

echo "----------Generating Image-----------"
./build/inOneWeekend > image.ppm