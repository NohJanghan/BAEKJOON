// BOJ Silver 1 - 회의실 배정
#include <algorithm>
#include <iostream>
using namespace std;

struct schedule {
    int start;
    int end;

    void set(int _start, int _end) {
        start = _start;
        end = _end;
    }
};

bool compare(schedule& a, schedule& b) {
    return (a.end - a.start) < (b.end - b.start);
}

int main() {
    int N;
    int start, end;
    cin >> N;
    
    schedule data[N];
    for(int i = 0; i < N; i++) {
        cin >> start >> end;
        data[i].set(start, end);
    }

    sort(data, data+N, compare);
    
    
    return 0;
}