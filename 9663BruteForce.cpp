// BOJ Gold 4 - N-Queen
#include <iostream>
using namespace std;

const int maxN = 14;
int N;
bool vertical[maxN] = {0, };
bool slash[(2 * maxN) -1] = {0, };
bool backSlash[(2 * maxN) - 1] = {0, };

int count(int initialRow) {
    //기저사례: 남은 퀸이 없다면 1을 반환
    if(initialRow == N) return 1;
    
    int res = 0;
    for(int col = 0; col < N; col++) {
        int slashIndex = initialRow + col;
        int backSlashIndex = (N-1) + col - initialRow;

        if(!slash[slashIndex] && !backSlash[backSlashIndex] && !vertical[col]) {
            slash[slashIndex] = backSlash[backSlashIndex] = vertical[col] = true;
            res += count(initialRow + 1);
            slash[slashIndex] = backSlash[backSlashIndex] = vertical[col] = false;
        }
    }
    return res;
}

int main() {
    cin >> N;
    cout << count(0);    

    return 0;
}