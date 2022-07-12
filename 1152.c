#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[1000001] = {0, };
    scanf("%[^\n]s", str);

    int isEdge = 1; //이전에 확인한 것이 공백인지 => 확인하는 부분이 문장의 앞 또는 끝일 가능성이 있는지
    int wordCount = 0; //단어 개수
    int i = 0;
    for(i = 0; str[i] != '\0'; i++) {
        if(isEdge && str[i] != ' ') {
            wordCount++;
            isEdge = 0;
        }
        else if (!isEdge && str[i] == ' ')
        {
            isEdge = 1;
        }
        
    }

    printf("%d", wordCount);
    return 0;
}