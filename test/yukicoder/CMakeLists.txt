cmake_minimum_required(VERSION 3.16)
project(yukicoder)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if (CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
    set(BOOST_ROOT "C:/boost_1_75_0/")
    add_compile_options(
            -W4
    )
else ()
    set(BOOST_ROOT "/mnt/c/boost_1_75_0/")
    add_link_options(
            -fsanitize=address,undefined
    )
    add_compile_options(
            -Wall
            -Wextra
            -fsanitize=address,undefined
            -D_GLIBCXX_DEBUG
            -D_DEBUG
            -O2
    )
endif ()

find_package(Boost 1.75.0)
include_directories()

add_executable(yukicoder_1081.test 1081.test.cpp)
add_executable(yukicoder_184.test 184.test.cpp)
add_executable(yukicoder_430.test 430.test.cpp)
add_executable(yukicoder_497.test 497.test.cpp)
add_executable(yukicoder_599.test 599.test.cpp)
add_executable(yukicoder_891.test 891.test.cpp)
