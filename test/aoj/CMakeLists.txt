cmake_minimum_required(VERSION 3.16)
project(aoj)

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

add_executable(aoj_DSL_1_A.test DSL_1_A.test.cpp)
add_executable(aoj_DSL_2_B.test DSL_2_B.test.cpp)
add_executable(aoj_GRL_1_A.test GRL_1_A.test.cpp)
add_executable(aoj_GRL_1_B.test GRL_1_B.test.cpp)
add_executable(aoj_GRL_1_C.test GRL_1_C.test.cpp)
add_executable(aoj_NTL_1_B.test NTL_1_B.test.cpp)
add_executable(aoj_NTL_1_B_2.test NTL_1_B_2.test.cpp)
