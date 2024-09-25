#include <benchmark/benchmark.h>
#include "mylib.hpp"

static void BM_Sum(benchmark::State& state) {
    for (auto _ : state) {
        sum(1, 2, 3);
    }
}

BENCHMARK(BM_Sum);

BENCHMARK_MAIN();