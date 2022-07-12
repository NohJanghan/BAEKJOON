//BOJ Silver IV - 소수 찾기
#include <stdio.h>
#include <stdlib.h>

int isPrime(int a) {
    if( a == 1) {
        return 0;
    }
    for (int i = 2; i < a; i++)
    {
        if(a % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main(int argc, char const *argv[])
{
    int N = 0;
    scanf("%d", &N);

    int* arr = (int *) malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++)
    {
        scanf(" %d", &arr[i]);
    }
    
    int res = 0;
    for (int i = 0; i < N; i++)
    {  
        res += isPrime(arr[i]);
    }
    
    printf("%d", res);
    //해제
    free(arr);
    return 0;
}
