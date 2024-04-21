#include <iostream>

int main() {
    int a,b,c, max;
    std::cin >> a >> b >> c;
    
    int res;
    if(a == b && b == c) {
        res = 10000 + a * 1000;
    } else if(a == b || a==c) {
        res = 1000 + 100 * a;
    } else if(b == c) {
        res = 1000 + 100 * b;
    } else {
        max = a;
        if(b > max) max = b;
        if(c > max) max = c;
        res = max * 100;
    }
    std::cout << res << std::endl;
}