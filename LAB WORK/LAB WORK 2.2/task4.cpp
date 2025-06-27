// Q.4 Write a Program to find Simple interest.
#include <stdio.h>

int main() {
    float principal, rate, time, interest;
    printf("Enter principal, rate (%% per annum), and time (in years): ");
    scanf("%f %f %f", &principal, &rate, &time);

    interest = (principal * rate * time) / 100;
    printf("Simple Interest = %.2f\n", interest);

    return 0;
}
