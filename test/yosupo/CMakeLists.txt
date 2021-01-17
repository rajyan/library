cmake_minimum_required(VERSION 3.16)
project(yosupo)

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

add_executable(yosupo_associative_array.test associative_array.test.cpp)
add_executable(yosupo_lca.test lca.test.cpp)
add_executable(yosupo_point_add_range_sum.test point_add_range_sum.test.cpp)
add_executable(yosupo_unionfind.test unionfind.test.cpp)
