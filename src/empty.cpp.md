---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/BellmanFord.hpp
    title: src/BellmanFord.hpp
  - icon: ':heavy_check_mark:'
    path: src/Combination.hpp
    title: src/Combination.hpp
  - icon: ':warning:'
    path: src/Compress.hpp
    title: src/Compress.hpp
  - icon: ':heavy_check_mark:'
    path: src/CumulativeSum.hpp
    title: src/CumulativeSum.hpp
  - icon: ':heavy_check_mark:'
    path: src/Dijkstra.hpp
    title: src/Dijkstra.hpp
  - icon: ':heavy_check_mark:'
    path: src/Edge.hpp
    title: src/Edge.hpp
  - icon: ':heavy_check_mark:'
    path: src/Factorial.hpp
    title: src/Factorial.hpp
  - icon: ':heavy_check_mark:'
    path: src/FenwickTree.hpp
    title: src/FenwickTree.hpp
  - icon: ':heavy_check_mark:'
    path: src/FloydWarshall.hpp
    title: src/FloydWarshall.hpp
  - icon: ':heavy_check_mark:'
    path: src/LowestCommonAncestor.hpp
    title: src/LowestCommonAncestor.hpp
  - icon: ':heavy_check_mark:'
    path: src/Matrix2D.hpp
    title: src/Matrix2D.hpp
  - icon: ':heavy_check_mark:'
    path: src/Modint.hpp
    title: src/Modint.hpp
  - icon: ':heavy_check_mark:'
    path: src/Point2D.hpp
    title: src/Point2D.hpp
  - icon: ':heavy_check_mark:'
    path: src/Prime.hpp
    title: src/Prime.hpp
  - icon: ':heavy_check_mark:'
    path: src/Random.hpp
    title: src/Random.hpp
  - icon: ':warning:'
    path: src/RectangleSum.hpp
    title: src/RectangleSum.hpp
  - icon: ':heavy_check_mark:'
    path: src/RollingHash.hpp
    title: src/RollingHash.hpp
  - icon: ':heavy_check_mark:'
    path: src/Timer.hpp
    title: src/Timer.hpp
  - icon: ':warning:'
    path: src/TopologicalSort.hpp
    title: src/TopologicalSort.hpp
  - icon: ':heavy_check_mark:'
    path: src/UnionFind.hpp
    title: src/UnionFind.hpp
  - icon: ':heavy_check_mark:'
    path: src/bisearch.hpp
    title: src/bisearch.hpp
  - icon: ':warning:'
    path: src/chmax.hpp
    title: src/chmax.hpp
  - icon: ':heavy_check_mark:'
    path: src/chmin.hpp
    title: src/chmin.hpp
  - icon: ':heavy_check_mark:'
    path: src/clz.hpp
    title: src/clz.hpp
  - icon: ':heavy_check_mark:'
    path: src/ctz.hpp
    title: src/ctz.hpp
  - icon: ':heavy_check_mark:'
    path: src/debug_template.hpp
    title: src/debug_template.hpp
  - icon: ':warning:'
    path: src/divisor.hpp
    title: src/divisor.hpp
  - icon: ':heavy_check_mark:'
    path: src/fnv1a.hpp
    title: src/fnv1a.hpp
  - icon: ':heavy_check_mark:'
    path: src/makevec.hpp
    title: src/makevec.hpp
  - icon: ':heavy_check_mark:'
    path: src/modpow.hpp
    title: src/modpow.hpp
  - icon: ':heavy_check_mark:'
    path: src/popcount.hpp
    title: src/popcount.hpp
  - icon: ':heavy_check_mark:'
    path: src/print.hpp
    title: src/print.hpp
  - icon: ':heavy_check_mark:'
    path: src/runLength.hpp
    title: src/runLength.hpp
  - icon: ':heavy_check_mark:'
    path: src/slide_minmax.hpp
    title: src/slide_minmax.hpp
  - icon: ':heavy_check_mark:'
    path: src/template.hpp
    title: src/template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.9.1/x64/lib/python3.9/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/opt/hostedtoolcache/Python/3.9.1/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 193, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.9.1/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.9.1/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 400, in update\n    raise BundleErrorAt(path, i + 1, \"unable to process\
    \ #include in #if / #ifdef / #ifndef other than include guards\")\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt:\
    \ src/template.hpp: line 2: unable to process #include in #if / #ifdef / #ifndef\
    \ other than include guards\n"
  code: '#include "BellmanFord.hpp"

    #include "Combination.hpp"

    #include "Compress.hpp"

    #include "CumulativeSum.hpp"

    #include "Dijkstra.hpp"

    #include "Edge.hpp"

    #include "Factorial.hpp"

    #include "FenwickTree.hpp"

    #include "FloydWarshall.hpp"

    #include "LowestCommonAncestor.hpp"

    #include "Matrix2D.hpp"

    #include "Modint.hpp"

    #include "Point2D.hpp"

    #include "Prime.hpp"

    #include "Random.hpp"

    #include "RectangleSum.hpp"

    #include "RollingHash.hpp"

    #include "Timer.hpp"

    #include "TopologicalSort.hpp"

    #include "UnionFind.hpp"

    #include "bisearch.hpp"

    #include "chmax.hpp"

    #include "chmin.hpp"

    #include "clz.hpp"

    #include "ctz.hpp"

    #include "debug_template.hpp"

    #include "divisor.hpp"

    #include "fnv1a.hpp"

    #include "makevec.hpp"

    #include "modpow.hpp"

    #include "popcount.hpp"

    #include "print.hpp"

    #include "runLength.hpp"

    #include "slide_minmax.hpp"

    #include "template.hpp"

    '
  dependsOn:
  - src/BellmanFord.hpp
  - src/chmin.hpp
  - src/Edge.hpp
  - src/Combination.hpp
  - src/Modint.hpp
  - src/Compress.hpp
  - src/CumulativeSum.hpp
  - src/Dijkstra.hpp
  - src/Factorial.hpp
  - src/FenwickTree.hpp
  - src/FloydWarshall.hpp
  - src/LowestCommonAncestor.hpp
  - src/clz.hpp
  - src/Matrix2D.hpp
  - src/Point2D.hpp
  - src/Prime.hpp
  - src/ctz.hpp
  - src/popcount.hpp
  - src/Random.hpp
  - src/RectangleSum.hpp
  - src/RollingHash.hpp
  - src/Timer.hpp
  - src/TopologicalSort.hpp
  - src/UnionFind.hpp
  - src/bisearch.hpp
  - src/chmax.hpp
  - src/debug_template.hpp
  - src/print.hpp
  - src/divisor.hpp
  - src/fnv1a.hpp
  - src/makevec.hpp
  - src/modpow.hpp
  - src/runLength.hpp
  - src/slide_minmax.hpp
  - src/template.hpp
  isVerificationFile: false
  path: src/empty.cpp
  requiredBy: []
  timestamp: '2021-01-31 22:31:37+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/empty.cpp
layout: document
redirect_from:
- /library/src/empty.cpp
- /library/src/empty.cpp.html
title: src/empty.cpp
---
