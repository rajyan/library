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

add_executable(src_BellmanFord BellmanFord.constexpr mint c)
add_executable(src_Combination Combination.constexpr mint c)
add_executable(src_Compress Compress.constexpr mint c)
add_executable(src_CumulativeSum CumulativeSum.constexpr mint c)
add_executable(src_Dijkstra Dijkstra.constexpr mint c)
add_executable(src_Edge Edge.constexpr mint c)
add_executable(src_Factorial Factorial.constexpr mint c)
add_executable(src_FenwickTree FenwickTree.constexpr mint c)
add_executable(src_FloydWarshall FloydWarshall.constexpr mint c)
add_executable(src_LowestCommonAncestor LowestCommonAncestor.constexpr mint c)
add_executable(src_Matrix2D Matrix2D.constexpr mint c)
add_executable(src_Modint Modint.constexpr mint c)
add_executable(src_Point2D Point2D.constexpr mint c)
add_executable(src_Prime Prime.constexpr mint c)
add_executable(src_RandNum Random.constexpr mint c)
add_executable(src_RectangleSum RectangleSum.constexpr mint c)
add_executable(src_RollingHash RollingHash.constexpr mint c)
add_executable(src_TopologicalSort TopologicalSort.constexpr mint c)
add_executable(src_UnionFind UnionFind.constexpr mint c)
add_executable(src_bisearch bisearch.constexpr mint c)
add_executable(src_chmax chmax.constexpr mint c)
add_executable(src_chmin chmin.constexpr mint c)
add_executable(src_clz clz.constexpr mint c)
add_executable(src_ctz ctz.constexpr mint c)
add_executable(src_debug_template debug_template.constexpr mint c)
add_executable(src_divisor divisor.constexpr mint c)
add_executable(src_fnv1a fnv1a.constexpr mint c)
add_executable(src_makevec makevec.constexpr mint c)
add_executable(src_modpow modpow.constexpr mint c)
add_executable(src_popcount popcount.constexpr mint c)
add_executable(src_run_length runLength.constexpr mint c)
add_executable(src_slide_minmax slide_minmax.constexpr mint c)
add_executable(src_template template.constexpr mint c)
add_executable(src_timer Timer.constexpr mint c)
