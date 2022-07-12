#include <stdio.h>
#include <stdlib.h>

int main() {
    int sizeN, sizeM;
    scanf(" %d %d", &sizeN, &sizeM);
    
    //N*M 크기의 배열 할당/입력ㄴ
    int** arr = (int**) malloc(sizeof(int *) * sizeN);
    for(int i = 0; i < sizeN; i++) {
        arr[i] = (int*) malloc(sizeof(int) * sizeM);

        for(int j = 0; j < sizeM; j++) {
            scanf(" %d", &arr[i][j]); //배열 입력
        }
    }

    int K = 0; //계산 개수 K
    scanf(" %d", &K);
    
    //i,j,k,l을 저장할 배열 할당/입력
    int** ijxy = (int **) malloc(sizeof(int *) * K);
    for(int i = 0; i < K; i++) { 
        ijxy[i] = (int *) malloc(sizeof(int) * 4);
        
        scanf(" %d %d %d %d", &ijxy[i][0], &ijxy[i][1], &ijxy[i][2], &ijxy[i][3]);
        //input                i            j            x            y

        //인덱스의 시작이 0이도록 보정
        ijxy[i][0]--;
        ijxy[i][1]--;
        ijxy[i][2]--;
        ijxy[i][3]--;

    }

    //결과 계산/출력
    int res = 0;
    for (int i = 0; i < K; i++) //총 계산 수
    {   
        res = 0; //res 초기화
        for (int row = ijxy[i][0]; row < ijxy[i][2] + 1; row++) //행
        {  
            for (int  col = ijxy[i][1]; col < ijxy[i][3] + 1; col++)//열
            {   
                res += arr[row][col]; //계산
            }
            
        }
        
        printf("%d\n", res);
    }

    //메모리 해제
    for(int i = 0; i < sizeN; i++) {
        free(arr[i]);
    }
    free(arr);

    for (int i = 0; i < K; i++)
    {
        free(ijxy[i]);
    }
    free(ijxy);

    return 0;
}