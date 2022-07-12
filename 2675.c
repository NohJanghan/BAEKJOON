//BOJ Bronze II - 문자열 반복
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int testCaseNum = 0;
    scanf(" %d", &testCaseNum);

    
    for (int testCase = 0; testCase < testCaseNum; testCase++)
    {
        char string[161] = {0, };
        char input = ' ';
        int loop = 0;
        scanf(" %d", &loop);
        getchar();

        int i = 0;
        while(1) {
            input = getchar();
            if(input == '\n') break;

            for (int j = 0; j < loop; j++)
            {
                string[i * loop + j] = input;
            }
            
            i++;
        }
        printf("%s\n", string);
        
        
    }
    
    return 0;
}
