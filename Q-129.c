//A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

#include <stdio.h>

int main() {
    FILE *fp;
    int num, sum = 0, count = 0;
    float avg;

    fp = fopen("numbers.txt", "r");

    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    while (fscanf(fp, "%d", &num) != EOF) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("File contains no integers.\n");
        return 0;
    }

    avg = (float)sum / count;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}
