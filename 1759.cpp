// BOJ Gold 5 - 암호 만들기
#include <iostream>
#include <algorithm>
using namespace std;

char chars[15] = {0, };
char vowel[] = {'a', 'e', 'i', 'o', 'u'};
int C;

bool isVowel(char alphabet) {
    for (int i = 0; i < 5; i++)
    {
        if(vowel[i] == alphabet) return true;
    }
    
    return false;
}

void printAll(int rest, int initial = 0, const string& password = "") {
    //기저사례: 모든 경우를 찾으면 조건 만족 여부에 따라 1 반환
    if(rest == 0) {
        int countVowel = 0;
        for(auto iter = password.begin(); iter != password.end(); ++iter) {
            if(isVowel(*iter)) ++countVowel;
        }

        if(countVowel && (password.length() - countVowel) >= 2) cout << password << endl;
        else return;
    }

    for (int i = initial; i < C; i++)
    {
        printAll(rest - 1, i + 1, password + chars[i]);
    }
}

int main() {
    int L;
    cin >> L >> C;

    for (int i = 0; i < C; i++)
    {
        cin >> chars[i];
    }
    
    sort(&chars[0], &chars[C]);
    printAll(L);   

    return 0;
}