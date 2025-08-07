#include <stdio.h>
//lecture 1 basics
int main () {
    int num1, num2, result;
    printf("Enter Num1 and Num2 :");
    scanf("%d %d", &num1, &num2);
    result = num1 + num2;
    printf("Sum of the numbers = %d\n", result);
    result = num1 - num2;
    printf("Difference of the numbers = %d\n", result);
    result = num1 * num2;
    printf("Product of the numbers = %d\n", result);
    result = num1 / num2;
    printf("Division of the numbers = %d\n", result);
    return 0;
}
