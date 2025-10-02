//Write a program to print the following pattern:

#include <stdio.h>

int main() {
    int i, j;

    for (i = 5; i >= 1; i--) {          // starting point decreases
        for (j = i; j <= 5; j++) {      // print numbers up to 5
            printf("%d", j);
        }
        printf("\n"); // new line
    }

    return 0;
}
