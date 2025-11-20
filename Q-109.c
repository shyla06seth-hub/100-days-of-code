//Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // If k is larger than array size, no subarray exists
    if (k > n) {
        printf("-1");
        return 0;
    }

    int windowSum = 0;

    // Compute the sum of the first window
    for (int i = 0; i < k; i++)
        windowSum += arr[i];

    int maxSum = windowSum;

    // Slide the window
    for (int i = k; i < n; i++) {
        windowSum = windowSum - arr[i - k] + arr[i];  // remove left element, add right element
        if (windowSum > maxSum)
            maxSum = windowSum;
    }

    printf("%d", maxSum);

    return 0;
}
