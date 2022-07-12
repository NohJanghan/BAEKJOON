//BOJ Bronze V - 큰 수 A + B
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ARRSIZE (1250)

int lenOfStr(char arr[]) { //문자의 개수 반환
    int address = memchr(arr, '\0', sizeof(int) * ARRSIZE);
    return arr - address;
}

//int: 10^8
int main(int argc, char const *argv[])
{
    char A[10001];
    char B[10001];

    scanf("%s", A);
    scanf("%s", B);

    int dataA[ARRSIZE];
    int dataB[ARRSIZE];

    int lenA = lenOfStr(A);
    int lenB = lenOfStr(B);
    int lenMax = (lenA > lenB) ? lenA : lenB;

    int blockNumA = ((lenA - 1)/ 8) + 1; //몇개의 블록으로 나눌 것인지
    int blockNumB = ((lenB - 1)/ 8) + 1; //몇개의 블록으로 나눌 것인지

    int tmp = 0;
    for (int i = 0; i < blockNumA; i++)
    {
        char block[9] = {0, };
        strncpy(block, A[ 8 * (blockNumA - i - 1)], 8);
        dataA[blockNumA - 1 - i] = atoi(block) + tmp;

        //10의 9 승으로 나누었을 때 몫을 tmp에 추가
        tmp = dataA[blockNumA - 1 - i] / 1000000000;
    }

    for (int i = 0; i < blockNumA; i++)
    {
        printf("%d,", dataA[i]);
    }

    return 0;
}



