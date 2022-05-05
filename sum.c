#include<stdio.h>
int input() {
    int a;
    if(scanf("%d",&a) == 1) {
        return a;
    }
}

int main() {
    printf("Sum is : %d", input() + input());
    return 0;
}