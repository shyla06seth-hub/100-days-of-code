//Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

#include <stdio.h>

enum Status {
    SUCCESS = 1,
    FAILURE,
    TIMEOUT
};

int main() {
    int code;
    enum Status s;

    printf("Enter status code (1 = SUCCESS, 2 = FAILURE, 3 = TIMEOUT): ");
    scanf("%d", &code);

    s = code;

    switch (s) {
        case SUCCESS:
            printf("Operation completed successfully.\n");
            break;
        case FAILURE:
            printf("Operation failed. Please try again.\n");
            break;
        case TIMEOUT:
            printf("Operation timed out. Check your connection.\n");
            break;
        default:
            printf("Invalid status code.\n");
    }

    return 0;
}
