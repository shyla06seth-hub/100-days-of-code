//Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>  //for pow()

int main() {
    float principal, rate, time, simple_interest, compound_interest;

    printf("Enter Principal: ");
    scanf("%f" , &principal);

    printf("Enter Rate of Interest: ");
    scanf("%f" , &rate);

    printf("Enter Time (in years): ");
    scanf("%f" , &time);

    //Simple Interest
    simple_interest = (principal * rate * time) / 100;

    //Compound Interest
    compound_interest = principal * pow((1 + rate / 100), time) - principal;

    printf("Simple Interest = %.2f\n" , simple_interest);
    printf("Compound Interest = %.2f\n" , compound_interest);

    return 0;
}