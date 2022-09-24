// BOJ Silver 5 - 재귀함수가 뭔가요?
// base가  "----"이 아니라 "____"임
#include <iostream>
#include <string>
using namespace std;

string base = "____";

void rep(int remain, int baseCount) {
    string repBase;
    for (int i = 0; i < baseCount; i++)
    {
        repBase += base;
    }
    
    if(baseCount == 0)
        cout << "어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다." << endl;
    cout << repBase << "\"재귀함수가 뭔가요?\"" << endl;
    if (remain == 0)
    {
        cout << repBase << "\"재귀함수는 자기 자신을 호출하는 함수라네\"" << endl;
    } else {
        cout << repBase << "\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어." << endl;
        cout << repBase << "마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지." << endl;
        cout << repBase << "그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"" << endl;
        rep(remain - 1, baseCount + 1);
    }
    cout << repBase << "라고 답변하였지." << endl;
}

int main() {
    int N;
    cin >> N;

    rep(N, 0);
    return 0;
}