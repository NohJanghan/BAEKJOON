//BOJ Silver 3 - 소수 구하기
#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    int M, N;
    cin >> M >> N;

    int* table = new int[N + 1]{};
    table[1] = 1;
    for(int i = 2; i <= sqrt(N); i++) {
        if(table[i] == 1) continue;
        for(int j = 2 * i; j <= N; j += i) {
            table[j] = 1;
        }
    }

    for (int i = M; i <= N; i++)
    {
        if(table[i] == 1) continue;
        else{
            cout << i << '\n';
        }
    }
    
    delete table;
    return 0;
}
