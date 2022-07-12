//BOJ Bronze II - 숫자의 합
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int res = 0;
    char input = 0;

    for (int i = 0; i < N; i++)
    {
        scanf(" %c", &input);
        res += (int)input - (int)'0';
    }
    
    printf("%d", res);
    return 0;
}