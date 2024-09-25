#include "mylib.hpp"

int sum(int a, int b, int c) {
    return a + b + c;
}

int try_to_sum(int a, int b, int c) {
    if (a + b + c > 100) {
        return -1;
    }
    return a + b + c;
}