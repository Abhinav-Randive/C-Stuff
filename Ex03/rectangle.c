#include <stdio.h>

int main() {

    long int x, y;

    printf("Enter the length: ");
    scanf("%li", &x);

    printf("Enter the width: ");
    scanf("%li", &y);

    long int area = (x * y);
    long int perimeter = 2 * (x + y);

    printf("The area of the rectangle is %li\n", area);

    printf("The perimeter of the rectangle is %li\n", perimeter);

    return 0;
}
