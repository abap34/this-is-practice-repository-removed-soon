#include <benchmark/benchmark.h>
#include "src/mylib.hpp"

static void BM_Sum(benchmark::State& state) {
    for (auto _ : state) {
        try_to_sum(1, 2, 3);
    }
}

BENCHMARK(BM_Sum);

BENCHMARK_MAIN();