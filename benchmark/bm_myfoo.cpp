#include <benchmark/benchmark.h>
#include <iostream>
#include "myfoo.h"


static void BM_test(benchmark::State& state) {
    for (auto _ : state) {
        print_foo();
    }
    state.SetLabel("bm_test");
}

BENCHMARK(BM_test);
BENCHMARK_MAIN();


