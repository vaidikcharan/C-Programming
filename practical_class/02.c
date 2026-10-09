///with for loops
#include <stdio.h>

int main() {
    float principal, rate, time, simpleInterest;
    int n;

    printf("How many times do you want to calculate? ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        printf("\nCalculation %d\n", i);

        printf("Enter principal amount: ");
        scanf("%f", &principal);

        printf("Enter rate of interest: ");
        scanf("%f", &rate);

        printf("Enter time (in years): ");
        scanf("%f", &time);

        simpleInterest = (principal * rate * time) / 100;

        printf("Simple Interest = %.2f\n", simpleInterest);
    }

    return 0;
}