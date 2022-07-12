//BOJ Bronze II - 음계
#include <stdio.h>

int main() {
    
    int input = 0;
    int mode = 0; //1 is ascending, 2 is descending, 3 is mixed

    for (int i = 0; i < 8; i++)
    {
        scanf(" %d", &input);
        if(!mode) {
            if(input == 1) mode = 1; //ascending
            else if(input == 8) mode = 2; //descending
            else {
                mode = 3; //mixed
                break;
            }
        }
        else if(mode == 1 && input == i + 1) continue;
        else if(mode == 2 && input == 8 - i) continue;
        else {
            mode = 3;
            break;
        }
    }
    
    if(mode == 1) printf("ascending");
    else if(mode == 2) printf("descending");
    else if(mode == 3) printf("mixed");
}