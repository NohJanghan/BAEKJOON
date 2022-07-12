//BOJ Bronze II - OX퀴즈
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int N;
    scanf("%d", &N);
    getchar();

    char input = 0;
    int multiply = 0;
    int score = 0;
    for (int i = 0; i < N; i++)
    {
        multiply =0;
        score = 0;
        input = 1;

        while(input != '\n') {
            
            input = getchar();
            if(input == 'O') {
                score += ++multiply;
            }
            else {
                multiply = 0;
            }
        }

        printf("%d\n", score);
    }


    return 0;
}
