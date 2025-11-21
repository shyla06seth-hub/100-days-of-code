//Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

#include <stdio.h>

int main() {
    char s[200], t[200];
    int freqS[26] = {0}, freqT[26] = {0};
    int i;

    printf("Enter first string: ");
    scanf("%s", s);

    printf("Enter second string: ");
    scanf("%s", t);

    for (i = 0; s[i] != '\0'; i++)
        freqS[s[i] - 'a']++;

    for (i = 0; t[i] != '\0'; i++)
        freqT[t[i] - 'a']++;

    for (i = 0; i < 26; i++) {
        if (freqS[i] != freqT[i]) {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");
    return 0;
}
