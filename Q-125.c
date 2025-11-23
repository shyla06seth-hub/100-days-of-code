//Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50];
    char text[200];

    printf("Enter filename to open in append mode: ");
    scanf("%s", filename);

    // Open file in append mode
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Unable to open file.\n");
        return 1;
    }

    // Clear input buffer before taking full line
    getchar();

    printf("Enter the line to append: ");
    fgets(text, sizeof(text), stdin);

    // Append the line to the file
    fputs(text, fp);

    printf("Text appended successfully!\n");

    fclose(fp);
    return 0;
}
