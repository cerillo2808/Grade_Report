cmake_minimum_required(VERSION 3.15 FATAL_ERROR)

# TODO: Cambien acá el nombre del proyecto
project(cpp_template)

enable_language(CXX)

# TODO: Cambien acá la versión de C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake/modules/)

set(GCOVR_ADDITIONAL_ARGS --fail-under-line 90 --fail-under-branch 60)

add_subdirectory(src)
add_subdirectory(tests)