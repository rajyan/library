cmake_minimum_required(VERSION 3.16)
project(own)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if (CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
    add_compile_options(
            -W4
    )
else ()
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

add_executable(own_Modint_Basic.test Modint_Basic.test.cpp)
add_executable(own_Random_clz.test Random_clz.test.cpp)
add_executable(own_Random_ctz.test Random_ctz.test.cpp)
add_executable(own_Random_popcount.test Random_popcount.test.cpp)
add_executable(own_Random_runlength.test Random_runlength.test.cpp)
add_executable(own_RuntimeModint_Basic.test RuntimeModint_Basic.test.cpp)
