#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << a * (b % 10) << '\n' << a * (b % 100 /10) << '\n' << a * (b / 100) << '\n' << a * b << std::endl;
}