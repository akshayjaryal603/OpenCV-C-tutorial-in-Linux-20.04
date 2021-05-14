# OpenCV-C-tutorial-in-Linux-20.04
Basics to Advanced guide for OpenCV C++ in Linux Terminal

## Requirements

- OpenCV 4.0 or above version

## Steps for writing CMakeLists.txt for building the C++ code in Linux terminal
## For reference How to write CMakeLists.txt please refer to the given CMakeLists.txt in the repo or refer to below sample

```
cmake_minimum_required(VERSION 2.8)
project( "Give project name here" )
find_package( OpenCV REQUIRED )
include_directories( ${OpenCV_INCLUDE_DIRS} )
add_executable( "Give binary or execuable file name here" "write here the cpp file name with .cpp (refer to the CMakeLists.txt given in the repo)" )
target_link_libraries( "Give binary file name here" ${OpenCV_LIBS} )
```

## Steps to build

To compile on Linux, mac or Windows using Mingw

```
cmake .
make
```

## Executables

The following applications are generated.

Binary or executable file is generated in the same folder where you make the project

Then simply run the executable file like:

-  ./executable_file
