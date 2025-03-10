/*

The factorial of an integer n, written n!, is the product of all the integers
from 1 to n.

For example, 4! = 1 * 2 * 3 * 4 = 24

Write a program which asks the user for an integer n and calculates n!. Here is
what an example run should look like:

Enter n: 4
4! = 24

Note that this is very similar to finding triangle numbers, but instead of
finding a sum of integers, we are finding the product.

*/
#include <stdio.h>

int main() {
    int n;

    printf("Enter n: ");
    scanf("%i", &n);

    int y = 1;

    for (int i = 1; i <= n; ++i) {
        y = y * i;
    }

    printf("%i! = %i\n", n, y);

    return 0;
}
