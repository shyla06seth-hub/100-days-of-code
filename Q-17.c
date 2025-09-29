//Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2, realPart, imgPart;

    printf("Enter coefficients a, b, c: ");
    scanf("%f %f %f" , &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct:\n");
        printf("Root1 = %.2f, Root2 = %.2f\n" , root1, root2);
    }
    else if (discriminant == 0) {
        root1 = -b / (2 * a);
        printf("Roota are real and equal:\n");
        printf("Root1 = Root2 = %.2f\n" , root1);
    }
    else {
        realPart = -b / (2 * a);
        imgPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and imaginary:\n");
        printf("Root1 = %.2f + %.2fi\n" , realPart, imgPart);
        printf("Root2 = %.2f - %.2fi\n" , realPart, imgPart);

    }

    return 0;
}