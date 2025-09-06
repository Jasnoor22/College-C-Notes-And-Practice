#include<stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int n, d,sum=0;
    while(n>0)
    {
        d = n % 10;
        sum = sum * 10 + d;
        n = n / 10;
    }
    printf("Reversed number: %d", sum);
    if (number == sum) {
        printf("\nThe number is a palindrome.\n");
    } else {
        printf("\nThe number is not a palindrome.\n");
    }
    return 0;
}