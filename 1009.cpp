// BOJ Bronze 2 - 분산처리
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    unsigned T, a, b;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        cin >> a >> b;

        int res = 1;
        for (int i = 0; i < b; i++)
        {
            res *= a;
            --res;
            res %= 10;
            ++res;
        }
        cout << res << endl;
    }
    

    return 0;
}