//Write a program to print the following pattern:

#include <stdio.h>

int main() {
    int i, j, n = 4; // height of upper half

    // Upper half
    for (i = 1; i <= n; i++) {
        // print spaces
        for (j = i; j < n; j++) {
            printf(" ");
        }
        // print stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half
    for (i = n - 1; i >= 1; i--) {
        // print spaces
        for (j = n; j > i; j--) {
            printf(" ");
        }
        // print stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
