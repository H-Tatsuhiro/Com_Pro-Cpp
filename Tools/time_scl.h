#include <chrono>
#include <stdio.h>

chrono::system_clock::time_point start, endt;

void time_scl_begin() {

    start = chrono::system_clock::now();

}

void time_scl_end() {

    endt = chrono::system_clock::now();

    double time = static_cast<double>(chrono::duration_cast<chrono::microseconds>(endt - start).count() / 1000.0);
    printf("time %lf[ms]\n", time);
}