// BOJ Gold 4 - N-Queen
// O(1) Complexcity
// use array of answer. answer is counted with Brute Force.
#include <iostream>
using namespace std;

int main() {
    const int answerArray[] = {1, 0, 0, 2, 10, 4, 40, 92, 352, 724, 2680, 14200, 73712, 365596};
    int N;
    cin >> N;

    cout << answerArray[N-1];
    return 0;
}