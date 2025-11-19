//Find the longest word in a sentence.

#include <stdio.h>

int main() {
    char str[200], longest[200];
    int i = 0, len = 0, maxLen = 0, start = 0, maxStart = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            if (len == 0) start = i;  
            len++;
        } else {
            if (len > maxLen) {       
                maxLen = len;
                maxStart = start;
            }
            len = 0;
        }
        i++;
    }

    if (len > maxLen) {
        maxLen = len;
        maxStart = start;
    }
    
    for (i = 0; i < maxLen; i++) {
        longest[i] = str[maxStart + i];
    }
    longest[maxLen] = '\0';

    printf("Longest word: %s\n", longest);

    return 0;
}
