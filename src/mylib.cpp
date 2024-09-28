#include "mylib.hpp"
#include <unistd.h>

int sum(int a, int b, int c) {
    return a + b + c;
}

int try_to_sum(int a, int b, int c) {
    // wait 0.1 seconds
    usleep(0.1 * 1000 * 1000);
    if (a + b + c > 100) {
        return -1;
    }
    return a + b + c;
}