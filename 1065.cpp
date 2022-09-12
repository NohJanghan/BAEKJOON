// BOJ Silver 4 - 한수
#include <iostream>
#include <math.h>
using namespace std;

int getNum(int n) {
    if(n < 100) return n;

    int initial_n = n;
    int diff = n % 10 - (n/10) % 10;
    while(n / 10 != 0) {
        if (diff != (n % 10 - (n/10) % 10) )
        {
            return getNum(initial_n - 1);
        }
        n /= 10;
    }
    return getNum(initial_n - 1) + 1;
}

int main() {
    int N;
    cin >> N;

    cout << getNum(N);
    return 0;
}