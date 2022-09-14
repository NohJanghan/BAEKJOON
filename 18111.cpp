// BOJ Silver 2 - 마인크래프트
#include <iostream>
using namespace std;

int N, M, B;
int map[500][500]; //map[N-1][M-1]
int minHeight = 987654321, maxHeight = -1;

int minTime = 987654321, heightAtMinTime;

int getTime(int height) {
    int breakCount = 0, putCount = 0;

    for(int row = 0; row < N; ++row) {
        for (int col = 0; col < M; ++col) {
            if(map[row][col] == height) continue;
            else if(map[row][col] < height) putCount += height - map[row][col];
            else breakCount += map[row][col] - height;
        }
    }

    if(B + breakCount < putCount) {
        return -1;
    } else {
        return breakCount * 2 + putCount;
    }
}

int main() {
    cin >> N >> M >> B;
    for (int row = 0; row < N; row++)
    {
        for (int col = 0; col < M; col++)
        {
            cin >> map[row][col];
            if (map[row][col] > maxHeight) maxHeight = map[row][col];
            if (map[row][col] < minHeight) minHeight = map[row][col];
        }
    }

    int time;
    for (int h = minHeight; h <= maxHeight; h++)
    {
        time = getTime(h);
        if(time == -1) {
            continue;
        }
        if(time <= minTime) {
            minTime = time;
            heightAtMinTime = h;
        }
    }
    cout << minTime << " " << heightAtMinTime << endl;
    
    return 0;
}