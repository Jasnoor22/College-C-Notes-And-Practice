#include <stdio.h>

int main() {
    int a , b , stamp;
    printf("enter for a :");
    scanf("%d",&a);
    printf("enter for b :");
    scanf("%d",&b);
    stamp = a;
    a = b;
    b = stamp ;
    printf("a = %d\n",a);
    printf("b = %d\n",b);

    return 0;
}