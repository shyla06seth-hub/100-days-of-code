//Check if one string is a rotation of another.

#include <stdio.h>

int length(char s[]) {
    int i = 0;
    while (s[i] != '\0') i++;
    return i;
}

int isRotation(char s1[], char s2[]) {
    int len1 = length(s1);
    int len2 = length(s2);

    if (len1 != len2)
        return 0;

    char temp[200];
    int i, j;

    for (i = 0; i < len1; i++)
        temp[i] = s1[i];
    for (j = 0; j < len1; j++)
        temp[i + j] = s1[j];

    temp[2 * len1] = '\0';

    for (i = 0; i <= 2 * len1 - len2; i++) {
        int match = 1;
        for (j = 0; j < len2; j++) {
            if (temp[i + j] != s2[j]) {
                match = 0;
                break;
            }
        }
        if (match)
            return 1;
    }

    return 0;
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    int a = length(str1);
    if (a > 0 && str1[a-1] == '\n') str1[a-1] = '\0';
    int b = length(str2);
    if (b > 0 && str2[b-1] == '\n') str2[b-1] = '\0';

    if (isRotation(str1, str2))
        printf("The strings are rotations of each other.\n");
    else
        printf("The strings are NOT rotations of each other.\n");

    return 0;
}
