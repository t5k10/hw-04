cmake_minimum_required(VERSION 3.10)

project(calc CXX)

set(SOURCES
    src/add.cpp
    src/sub.cpp
    src/mul.cpp
    src/div.cpp
    src/variable.cpp
    src/lexer.cpp
    src/parser.cpp
    src/astnode.cpp
    src/main.cpp
)

add_executable(calc ${SOURCES})

target_include_directories(calc PRIVATE include)

if (CMAKE_CXX_COMPILER_ID MATCHES "Clang" OR
    CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    target_compile_options(calc PRIVATE 
        -g
        -Wall
        -Wextra
        -Werror
        -pedantic
    )
elseif (CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
    target_compile_options(calc PRIVATE
        /EHsc
        /W4
        /WX
    )
endif()

target_compile_features(calc PUBLIC cxx_std_17)
