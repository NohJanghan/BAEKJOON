//BOJ Bronze I - 중복된 숫자
#include <stdio.h>
#include <math.h>

int main() {
    int N = 0;
    scanf(" %d", &N);
    long long res = ((long long) N * (N-1)) / 2;
    int input = 0;

    for (int i = 0; i < N; i++)
    {
        scanf(" %d", &input);
        res -= (long long) input;
    }

    printf("%lld", -res);
    return 0;
}