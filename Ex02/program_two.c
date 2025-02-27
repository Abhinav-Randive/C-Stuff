#include <stdio.h>

int main(){
    
    int x,y, sum;

    printf("Enter x: ");
    scanf("%d", &x);

    printf("Enter y: ");
    scanf("%d", &y);

    sum = x + y;
    
    printf("x + y is %d\n", sum);

    int difference = x - y;

    printf("x - y is %d\n", difference);

    return 0;
}