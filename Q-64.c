//Find the digit that occurs the most times in an integer number.

#include<stdio.h>

int main() {
    long num;
    int digit, count[10] = {0};
    int i, max = 0, mostFreq = 0;

    printf("Enter a number: ");
    scanf("%ld" , &num);

    if (num < 0)
    num = -num;

    while (num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    for (i = 0; i < 10; i++) {
        if (count[i] > max) {
            max = count[i];
            mostFreq = i;
        }
    }

    printf("Digits %d occurs the most (%d times). \n" , mostFreq, max);

    return 0;
}
