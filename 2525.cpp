#include <iostream>

int main() {
    int h, m, time;
    std::cin >> h >> m >> time;
    h = (h + (m + time) / 60) % 24;
    m = (m + time) % 60;
    std::cout << h << ' ' << m << std::endl;

    return 0;
}