#include <iostream>
#include <libr/utils.hpp>

int main() {

    int a = 0;
    int b = 0;
    std::cin >> a >> b;
    std::cout << "multiply: " << multiply(a, b) << "\n";
    std::cout << "subtract: " << subtract(a, b) << "\n";
    std::cout << "add: " << add(a, b) << "\n";
    std::cout << "division: " << division(a, b) << "\n";
    return 0;
}