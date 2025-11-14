//Find the second largest element in an array.

#include <stdio.h>

int main() {
    int arr[100], n, i;
    int max1, max2;

    printf("Enter number of elements: ");
    scanf("%d" , &n);

    printf("Enter %d elements: " , n);
    for (i = 0; i < n; i++)
    scanf("%d" , &arr[i]);

    max1 = max2 = -2147483648;

    for (i = 0; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }

    if (max2 == -2147483648)
    printf("Second largest doesn't exist.\n");
else
printf("Second largest element = %d\n" , max2);

return 0;
}