cmake_minimum_required(VERSION 3.3)

project( test_eigen)

set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake_module)   #写个FindNAME.cmake文件自定义查找库

find_package(Eigen3 REQUIRED)
include_directories(${EIGEN3_INCLUDE_DIRS})

add_executable(test_eigen test_eigen.cc)