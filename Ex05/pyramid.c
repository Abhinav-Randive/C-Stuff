/*

Write a program which prints out a pyramid of asterisks (*'s) with a size
specified by the user. If the size specified by the user is n, then there must
be n rows of asterisks where the first row has 1 asterisk, the second has 3,
and so on. Each row must be centered, and there must not be any trailing spaces
after the asterisks. Here is an example run:


Enter the size of the pyramid: 4
   *
  ***
 *****
*******

For this one, think about how many spaces and how many asterisks you need in
each row. You will need two separate loops nested inside the main loop, one to
print the leading spaces and the other to print the asterisks.

 */

#include <stdio.h>


int pyramid(int size);

int main() {
    int size;
    printf("Enter the size of the pyramid: ");
    scanf("%i", &size);
    pyramid(size);
    return 0;
}


int pyramid(int size) {

    for (int i = 0; i < size; i++) {
        
        for (int j = 0; j < size - i - 1; j++) {
            printf(" ");
        }

        
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }

        printf("\n"); 
    }
    return 0;
}
