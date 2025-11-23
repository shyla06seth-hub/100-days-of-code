//Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

#include <stdio.h>
#include <ctype.h>  

int main() {
    FILE *in, *out;
    char ch;

    in = fopen("input.txt", "r");
    if (in == NULL) {
        printf("Error: input.txt not found.\n");
        return 1;
    }

    out = fopen("output.txt", "w");
    if (out == NULL) {
        printf("Error: Unable to create output.txt\n");
        fclose(in);
        return 1;
    }

    while ((ch = fgetc(in)) != EOF) {
        if (ch >= 'a' && ch <= 'z')
            ch = toupper(ch);

        fputc(ch, out);
    }

    printf("Conversion completed. Check output.txt\n");

    fclose(in);
    fclose(out);

    return 0;
}
