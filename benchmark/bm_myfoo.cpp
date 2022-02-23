#include <benchmark/benchmark.h>
#include <iostream>
#include "myfoo.h"


static void BM_4dx_test(benchmark::State& state) {
    for (auto _ : state) {
        print_foo();
    }
    state.SetLabel("4dx_test");
}

BENCHMARK(BM_4dx_test);
BENCHMARK_MAIN();


