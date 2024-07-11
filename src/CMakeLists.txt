# TODO: Cambien el nombre del destino. Este va a ser el nombre del ejecutable.
# TARGET_NAME es una variable que se puede usar en el CMakeLists.txt para referirse al nombre del destino.
set(TARGET_NAME report)

project(${TARGET_NAME})

set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g")

set(INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

set(SOURCES
# TODO: Agreguen acá los archivos fuente que van a compilar.
    main.cpp
)

add_executable(${TARGET_NAME} ${SOURCES})
target_include_directories(${TARGET_NAME} PRIVATE ${INCLUDE_DIR})

if(CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
    target_compile_options(${TARGET_NAME} PRIVATE -Wall -Werror -g)
endif()