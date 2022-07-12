//BOJ Silver IV - 수 찾기
#include <stdio.h>
int findInArr(int a, int arr[], int size) {
    int flag = 0;
    for (int i = 0; i < size; i++)
    {
        if (a == arr[i])
        {
            flag = 1;
            break;
        }
    }
    return flag;
    
}


int main(int argc, char const *argv[])
{
    int N, M;
    scanf(" %d", &N);

    int arr1[N];
    for (int i = 0; i < N; i++)
    {
        scanf(" %d", &arr1[i]);
    }

    scanf(" %d", &M);
    int arr2[M];
    for (int i = 0; i < M; i++)
    {
        scanf(" %d", &arr2[i]);
    }
    
    for (int i = 0; i < M; i++)
    {
        printf("%d\n", findInArr(arr2[i], arr1, N));
    }


    
    return 0;
}
