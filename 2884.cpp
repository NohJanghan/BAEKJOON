#include <iostream>

int main() {
    int h, m;
    std::cin >> h >> m;
    if (m < 45) {
        h = (h + 23) % 24;
    }
    m = (m + 15) % 60;
    std::cout << h << ' ' << m << std::endl;
}