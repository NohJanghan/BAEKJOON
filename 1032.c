//BOJ Bronze I - command prompt

#include <stdio.h>
#include <stdlib.h>

//문자열 배열에 
int isSameCharInStr(const char** strArr, int strNum, int index) {
    char contrast = strArr[0][index];
    for (int i = 0; i < strNum; i++)
    {
        if (strArr[i][index] != contrast) return 0;
    }
    return 1;
}

int main() {
    //입력
    int sizeN = 0;
    scanf(" %d", &sizeN);

    char** str = (char**) malloc(sizeof(char*) * sizeN);
    
    for (int i = 0; i < sizeN; i++)
    {
        str[i] = (char *) malloc(sizeof(char) * 51);
        scanf(" %s", str[i]);

    }
    
    //연산
    char resStr[51] = {'\0', };
    for (int i = 0; str[0][i]; i++) //문자열이 끝날 때까지 반복
    {
        if(isSameCharInStr((const char**) str, sizeN, i)) {
            resStr[i] = str[0][i];
        }
        else resStr[i] = '?'; //문자가 서로 다를 경우 '?' 저장
    }
    
    printf("%s", resStr);
    return 0;
}