//Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.

#include <stdio.h>

enum Days {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main() {
    enum Days d;

    printf("Day\t\tValue\n");
    printf("-------------------------\n");

    for (d = SUNDAY; d <= SATURDAY; d++) {
        switch (d) {
            case SUNDAY:    printf("SUNDAY\t\t%d\n", d); break;
            case MONDAY:    printf("MONDAY\t\t%d\n", d); break;
            case TUESDAY:   printf("TUESDAY\t\t%d\n", d); break;
            case WEDNESDAY: printf("WEDNESDAY\t%d\n", d); break;
            case THURSDAY:  printf("THURSDAY\t%d\n", d); break;
            case FRIDAY:    printf("FRIDAY\t\t%d\n", d); break;
            case SATURDAY:  printf("SATURDAY\t%d\n", d); break;
        }
    }

    return 0;
}
