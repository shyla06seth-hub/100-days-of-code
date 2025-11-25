//Show that enums store integers by printing assigned values.

#include <stdio.h>

enum Example {
    A = 5,
    B = 10,
    C,    
    D = 20,
    E   
};

int main() {

    printf("A = %d\n", A);
    printf("B = %d\n", B);
    printf("C = %d\n", C);
    printf("D = %d\n", D);
    printf("E = %d\n", E);

    return 0;
}
