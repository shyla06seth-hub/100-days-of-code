//Write a program to swap the first and last digit of a number

#include <stdio.h>
#include <math.h>

int main() {
    int n, num, firstDigit, lastDigit, digits, newNumber;

    printf("Enter an integer: ");
    scanf("%d" , &n);

    num = n;
    lastDigit = num % 10;

    digits = 0;
    while (num != 0) {
        digits++;
        num /= 10;
    }

    num = n;
    firstDigit = num / pow(10, digits - 1);

    int middle = n % (int)pow(10, digits - 1);
    middle /= 10;

    newNumber = lastDigit * pow(10, digits - 1) + middle * 10 + firstDigit;

    printf("Number after swapping first and last digits = %d\n" , newNumber);

    return 0;
}