//Write a program to find the LCM of two numbers.

#include <stdio.h>

int main() {
    int a, b, tempA, tempB, gcd, lcm;

    printf("Enter two positive integers: ");
    scanf("%d %d" , &a, &b);

    tempA = a;
    tempB = b;

    //Euclidean Algorith to find GCD
    while (tempB != 0) {
        int temp = tempB;
        tempB = tempA % tempB;
        tempA = temp;
    }

    gcd = tempA;

    //LCM formula
    lcm = (a *b) / gcd;

    printf("LCM of %d and %d = %d\n" , a, b, lcm);

    return 0;
}