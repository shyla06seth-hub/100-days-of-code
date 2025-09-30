//Write a program to reverse a given number.

#include <stdio.h>

int main() {
    int n, reversed = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d" , &n);

    while (n != 0) {
        remainder = n % 10;      //get last digit
        reversed = reversed * 10 + remainder;   //build reversed number
        n /= 10;
    }

    printf("Reversed number = %d\n" , reversed);

    return 0;
}