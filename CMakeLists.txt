cmake_minimum_required(VERSION 3.15 FATAL_ERROR)

# TODO: Cambien acá el nombre del proyecto
project(cpp_template)

enable_language(CXX)

# TODO: Cambien acá la versión de C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake/modules/)

add_subdirectory(src)