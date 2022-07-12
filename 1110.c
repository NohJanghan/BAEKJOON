//BOJ Bronze I - 더하기 사이클
#include <stdio.h>

int cycle(int origin, int num, int stack) {
    if(stack && num == origin) {
        return stack;
    }
    else {
        int a = (num % 10) + (num / 10);
        a = ((num %10) * 10) + (a % 10);
        return cycle(origin, a, stack +1);
    }
}


int main() {
    int n;
    scanf(" %d", &n);
    
    printf("%d", cycle(n,n,0));
    return 0;
}