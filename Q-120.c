//Write a program to take a string input. Change it to sentence case.

#include <stdio.h>

int main() {
    char str[500];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Convert first character to uppercase if it's lowercase
    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] -= 32;

    // Convert the rest to lowercase
    for (i = 1; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    }

    printf("Sentence case: %s", str);

    return 0;
}
