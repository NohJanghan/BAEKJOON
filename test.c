#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compareInt(const void* a, const void* b) { //오름차순
    return (int *) a - (int *) b;
}

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int deck[100] = {0, };
    for (int i = 0; i < N; i++)
    {
        scanf(" %d", &deck[i]);
    }
    
    //qsort(deck, sizeof(deck) / sizeof(int), sizeof(int), compareInt);
    int minDiff = __INT_MAX__; //M과 valude의 차이
    int value = 0; 

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if(j == i) continue;
            
            for (int k = 0; k < N; k++)
            {
                if(k == i || k == j) continue;
                
                int tmp = deck[i] + deck[j] + deck[k];
                if( tmp <= M && (M - tmp) < minDiff) {
                    value  = tmp;
                    minDiff = M - tmp;
                }
            }
            
        }
        
    }
    
    printf("%d", value);
    return 0;
}