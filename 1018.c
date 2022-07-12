//BOJ Silver V - 체스판 다시 칠하기
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isSameColor(char a, char b) {
    if(a==b) return 1;
    else return 0;
}

int main() {
    int N,M;
    scanf(" %d %d", &N, &M);

    char** board = (char **) malloc(sizeof(char *) * N);
    for (int i = 0; i < N; i++)
    {
        board[i] = (char *) malloc(sizeof(char) * (M + 1));
        scanf(" %s", board[i]);
    }
    
    int minPaint = __INT_MAX__;
    char colorLeftTop = 0;
    int nowPaint = 0;
    for (int i = 0; i < N - 7; i++)
    {
        for (int j = 0; j < M - 7; j++)
        {

            colorLeftTop = board[i][j];
            nowPaint = 0;
            for (int row = 0; row < 8; row++)
            {
                for (int col = 0; col < 8; col++)
                {
                    if(isSameColor(colorLeftTop, board[i+row][j+col]) != (col + row) % 2) ; //if 정상
                    else { //if 정상x
                        nowPaint ++;
                    }
                }
                
            }

            if(nowPaint == 0) {
                minPaint = 0;
                break;
            }
            if(nowPaint < minPaint) minPaint = nowPaint;
            if(64 - nowPaint < minPaint) minPaint = 64 - nowPaint;
            //printf("i: %d\tj: %d\tNowPrint: %d\n", i, j, nowPaint);
        }
        
    }
    printf("%d", minPaint);
    

    //메모리 해제
    for (int i = 0; i < N; i++)
    {
        free(board[i]);
    }
    free(board);

    return 0;   
}