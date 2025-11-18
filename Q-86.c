//Check if a string is a palindrome.

#include <stdio.h>

int main() {
    char str[100];
    int i, len = 0, flag = 1;

    printf("Enter a string:");
    fgets(str, sizeof(str), stdin);

    while (str[len] != '\0') {
        len++;
    }
    len--;

    for (i = 0; i < len/2; i++) {
        if (str[i] != str[len - 1 - i]) {
            flag = 0;
            break;
        }
    } 

    if (flag == 1)
    printf("The string is palindrome.");
else 
printf("The string is NOT a palindrome.");

return 0;
}