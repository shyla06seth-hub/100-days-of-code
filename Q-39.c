//Write a program to find the product of odd digits of a number.

#include <stdio.h>

int main() {
    int n, digit, product = 1, found = 0;

    printf("Enter an integer: ");
    scanf("%d" , &n);

    if (n == 0) {
        printf("Product of odd dogits = 0\n");
        return 0;
    }

    while (n != 0) {
        digit = n % 10;
        if (digit % 2 != 0) {
            product *= digit;
            found = 1;
        }
        n /= 10;
    }

    if (found)
    printf("Product of odd digits = %d\n" , product);
else
printf("No odd digits found\n");

return 0;
}