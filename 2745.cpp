#include <iostream>
#include <string>

int main() {
    std::string N;
    int R, decimal = 0;
    long long mult = 1;
    std::cin >> N >> R;
    for (int i = N.length() - 1; i >= 0; i--)
    {
        int parsed = N[i] >= 'A' ? N[i] - 'A' + 10 : N[i] - '0';
        decimal += parsed * mult;
        mult *= R;
    }

    std::cout << decimal << std::endl;
    
    return 0;
}