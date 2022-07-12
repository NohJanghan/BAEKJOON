#include <stdio.h>
#include <stdlib.h>

int compareInt(void const* a, void const* b) {
    return *(int *)a - *(int *)b;
}

int main() {
    int N;
    scanf("%d", &N);
    
    
    int* X = (int *) malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++)
    {
        scanf(" %d", &X[i]);
    }
    
    
    int* Y = (int *) malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++)
    {
        scanf(" %d", &Y[i]);
    }
    
    int finalRes = 0;
    int res = 0;
    //시간초과: 최적화 필요
    for (int i = 0; i < N; i++)
    {   
        res=0;
        for (int j = 0; j < N; j++)
        {
            res += X[j] * Y[(j+i)%N];
        }
        if(res > finalRes) finalRes = res;
    }
    
    printf("%d", finalRes);
    free(X);
    free(Y);
    return 0;
}