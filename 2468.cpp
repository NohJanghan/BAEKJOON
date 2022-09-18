// BOJ Silver 1 - 안전 영역
//틀린 이유: N과 floor를 헷갈려서 map[row][col]과 N을 비교함 
#include <iostream>
using namespace std;

int map[100][100] = {0, }; //map[N][N]
const int maxInt = 987654321;

//현재 [row][col]을 포함하는 안전구역을 체크함
void secureZone(int N, int floor, int row, int col) {
    //기저사례: 현재 칸이 물에 잠겼으면 안전구역의 크기를 넓히지 않음
    if(map[row][col] <= floor) return;

    map[row][col] = 0;
    if(row != 0) secureZone(N, floor, row - 1, col);
    if(col != N - 1) secureZone(N, floor, row, col + 1);
    if(row != N - 1) secureZone(N, floor, row + 1, col);
    if(col != 0) secureZone(N, floor, row, col - 1);
    return;
}

int countSafeZone(int N, int floor) { //N까지 물이 잠길 때
    int count = 0;
    for(int row = 0; row < N; row++) {
        for(int col = 0; col < N; col++) {
            if(map[row][col] <= floor) continue;

            secureZone(N, floor, row, col);
            ++count;
        }
    }
    return count;
}


int main() {
    int N;
    cin >> N;

    int mapBackup[100][100] = {0, };

    int minFloor = maxInt;
    int maxFloor = 0;
    for(int row = 0; row < N; ++row) {
        for(int col = 0; col < N; ++col) {
            cin >> map[row][col];
            mapBackup[row][col] = map[row][col];
            if(map[row][col] < minFloor) minFloor = map[row][col];
            if(map[row][col] > maxFloor) maxFloor = map[row][col];
        }
    }
    
    int maxZone = 1;
    int floorAtMax = 0;
    for(int i = minFloor; i < maxFloor; ++i) {
        int res = countSafeZone(N, i);
        if(maxZone <= res) {
            maxZone = res;
            floorAtMax = i;
        }
        
        for(int row = 0; row < N; ++row) {
            for(int col = 0; col < N; ++col) {
                map[row][col] = mapBackup[row][col];
            }
        }
    }
    
    cout << maxZone << endl;
    // cout << floorAtMax << endl;
    // cout << N << " | " << minFloor << " | " << maxFloor << endl;
    // cout << countSafeZone(N, 1);
    return 0;
}