//Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>

int main() {
    char date[20];
    int d, m, y;

    printf("Enter date (dd/04/yyyy): ");
    scanf("%d/%d/%d", &d, &m, &y);

    if (m == 4)
        printf("%02d-Apr-%d\n", d, y);
    else
        printf("Month is not 04 as expected.\n");

    return 0;
}
