//Write a program to check if a number is a palindrome.

#include <stdio.h>

int main() {
    int n, original, reversed = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d" , &n);

    original = n;    //store original number

    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    if (original == reversed)
    printf("%d is a Palindrome number\n" , original);
else
printf("%d is not a Palindrome number\n" , original);

return 0;
}