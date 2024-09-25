#include <iostream>
#include "mylib.hpp"

int main() {
    std::cout << "Sum: " << sum(1, 2, 3) << std::endl;
    std::cout << "Try to Sum: " << try_to_sum(1, 2, 3) << std::endl;
    return 0;
}