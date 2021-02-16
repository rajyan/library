cmake_minimum_required(VERSION 3.16)
project(yosupo)

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
    add_compile_options(
            -Wall
            -Wextra
            -D_GLIBCXX_DEBUG
            -D_DEBUG
            -O2
    )
endif ()

find_package(Boost 1.75.0)
include_directories()

add_executable(yosupo_associative_array.test associative_array.test.cpp)
add_executable(yosupo_enumerate_primes.test enumerate_primes.test.cpp)
add_executable(yosupo_lca.test lca.test.cpp)
add_executable(yosupo_many_aplusb.test many_aplusb.test.cpp)
add_executable(yosupo_point_add_range_sum.test point_add_range_sum.test.cpp)
add_executable(yosupo_point_add_range_sum_2.test point_add_range_sum_2.test.cpp)
add_executable(yosupo_static_range_sum.test static_range_sum.test.cpp)
add_executable(yosupo_unionfind.test unionfind.test.cpp)
