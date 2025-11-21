//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration

#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int xorArr = 0, xorRange = 0;

    // ONE SINGLE LOOP
    for (int i = 0; i < n; i++) {
        xorArr ^= arr[i];   // XOR of all array elements
        xorRange ^= i;      // XOR of integers 0 to n-1
    }

    int repeated = xorArr ^ xorRange;

    printf("Repeated element: %d\n", repeated);

    return 0;
}
