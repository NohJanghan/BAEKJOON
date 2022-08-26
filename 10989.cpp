#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int* array = new int[10001]{};
    int num;
    for (int i = 0; i < N; i++)
    {
        scanf(" %d", &num);
        array[num] += 1;
    }

    for (int i = 0; i < 10001; i++)
    {
        for (int j = 0; j < array[i]; j++)
        {
            printf("%d\n", i);
        }
        
    }
    
    


    delete[] array;
    return 0;
}