//Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

#include <stdio.h>
#include <string.h>

int main() {
    char s[200];
    printf("Enter a string: ");
    scanf("%[^\n]", s);

    int freq[256] = {0};  
    int left = 0, maxLen = 0;

    for (int right = 0; s[right] != '\0'; right++) {
        freq[(unsigned char)s[right]]++;

        while (freq[(unsigned char)s[right]] > 1) {
            freq[(unsigned char)s[left]]--;
            left++;
        }

        int windowLen = right - left + 1;
        if (windowLen > maxLen)
            maxLen = windowLen;
    }

    printf("Length of longest substring without repeating characters: %d", maxLen);

    return 0;
}