#include <stdio.h>

int main() {
    float a , b ,c ;
    printf("enter three values a b c respectively");
    scanf("%f %f %f", &a ,&b,&c);
    if (a > b && a > c) {
        printf("The largest number is: %f\n", a);
    } else if (b > a && b > c) {
        printf("The largest number is: %f\n", b);
    } else {
        printf("The largest number is: %f\n", c);
    }
return 0;
}