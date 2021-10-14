cmake_minimum_required(VERSION 3.7 FATAL_ERROR)
project(snake)

set(LIBRARY_OUTPUT_PATH  ${PROJECT_SOURCE_DIR}/..)
add_library(snake SHARED snake.cpp snake.def)


