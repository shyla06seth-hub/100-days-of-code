//Write a program to check if a number is an Armstrong number.

#include <stdio.h>

// Function to compute integer power
int intPow(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int n, original, remainder, digits = 0;
    int result = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    original = n;

    // Count number of digits
    int temp = n;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    // Calculate sum of digits^digits
    temp = n;
    while (temp != 0) {
        remainder = temp % 10;
        result += intPow(remainder, digits);
        temp /= 10;
    }

    if (result == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);

    return 0;
}
