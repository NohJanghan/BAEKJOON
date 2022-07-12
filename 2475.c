//BOJ Bronze V - 검증수
#include <stdio.h>
#include <math.h>

int ctoi(char c) {
    return (int) (c - '0');
}

int main() {
    char code[6] = { 0, };

    scanf(" %c %c %c %c %c", &code[0], &code[1], &code[2], &code[3], &code[4]);
    
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += pow(ctoi(code[i]), 2);
    }
    sum %= 10;

    printf("%d", sum);
    return 0;
}