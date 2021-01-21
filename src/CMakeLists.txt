cmake_minimum_required(VERSION 3.16)
project(src)

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

add_executable(src_BellmanFord BellmanFord.cpp)
add_executable(src_Combination Combination.cpp)
add_executable(src_Compress Compress.cpp)
add_executable(src_CumulativeSum CumulativeSum.cpp)
add_executable(src_Dijkstra Dijkstra.cpp)
add_executable(src_Edge Edge.cpp)
add_executable(src_Factorial Factorial.cpp)
add_executable(src_FenwickTree FenwickTree.cpp)
add_executable(src_FloydWarshall FloydWarshall.cpp)
add_executable(src_LowestCommonAncestor LowestCommonAncestor.cpp)
add_executable(src_Modint Modint.cpp)
add_executable(src_Point2D Point2D.cpp)
add_executable(src_Prime Prime.cpp)
add_executable(src_RandNum RandNum.cpp)
add_executable(src_RectangleSum RectangleSum.cpp)
add_executable(src_RollingHash RollingHash.cpp)
add_executable(src_TopologicalSort TopologicalSort.cpp)
add_executable(src_UnionFind UnionFind.cpp)
add_executable(src_bisearch bisearch.cpp)
add_executable(src_chmax chmax.cpp)
add_executable(src_chmin chmin.cpp)
add_executable(src_clz clz.cpp)
add_executable(src_debug_template debug_template.cpp)
add_executable(src_divisor divisor.cpp)
add_executable(src_fnv1a fnv1a.cpp)
add_executable(src_in_grid in_grid.cpp)
add_executable(src_makevec makevec.cpp)
add_executable(src_modpow modpow.cpp)
add_executable(src_popcount popcount.cpp)
add_executable(src_run_length run_length.cpp)
add_executable(src_slide_minmax slide_minmax.cpp)
add_executable(src_template template.cpp)
add_executable(src_timer timer.cpp)
