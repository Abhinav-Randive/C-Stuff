#include <stdio.h>

int main() {
    
    double length, width, area;

    printf("Enter the length: ");
    scanf("%lf", &length);

    printf("Enter the width: ");
    scanf("%lf", &width);

    area = 0.5 * length * width;

    printf("The area of the triangle is %lf\n", area);

    return 0;
}