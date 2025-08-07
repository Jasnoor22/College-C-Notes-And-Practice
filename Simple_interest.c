#include<stdio.h>
int main() {
    float rate, interest;
    int time, principal;
    printf("Enter principal amount: ");
    scanf("%d", &principal);
    printf("Enter rate of interest: ");
    scanf("%f", &rate);
    printf("Enter time (in years): ");
    scanf("%d", &time);
    interest = (principal * rate * time) / 100;
    printf("Simple Interest = %.2f\n", interest);
    return 0;
}