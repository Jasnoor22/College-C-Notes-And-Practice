#include <stdio.h>

int main() {
    int units;
    float bill = 0;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 3 + 0;
    } else if (units <= 300) {
        bill = 100 * 3 + 0; 
        bill += (units - 100) * 5 + 180; 
    } else if (units <= 500) {
        bill = 100 * 3 + 0; 
        bill += 200 * 5 + 180; 
        bill += (units - 300) * 7 + 200; 
    } else {//
        bill = 100 * 3 + 0; 
        bill += 200 * 5 + 180;
        bill += 200 * 7 + 200; 
        bill += (units - 500) * 10 + 300; 
    }

    printf("Total Electricity Bill: %.2f\n", bill);
    return 0;
}