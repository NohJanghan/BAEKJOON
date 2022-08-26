//BOJ Bronze 2 - 벌집
#include <stdio.h>
using namespace std;

int main() {
    int room = 0;
    scanf("%d", &room);
    room--;

    int i = 0;
    for(i = 1; room > 0; i++) {
        room -= i * 6;
    }
    printf("%d", i);
    

    return 0;
}
