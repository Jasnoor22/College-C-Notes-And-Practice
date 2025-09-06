#include <stdio.h>

int main () {
    int d1,m1,y1 , current_age;
    int d2,m2,y2;
    printf("Enter the birth date (dd mm yyyy): \n");
    scanf("%d %d %d", &d1, &m1, &y1);
    printf("Enter the current date (dd mm yyyy):\n ");
    scanf("%d %d %d", &d2, &m2, &y2);
    if ( d1 < d2 && m1 < m2 && y1 < y2)
     {
        printf("%d/%d/%d",d2-d1,m2-m1,y2-y1);
    }
    else if (d1 > d2 && m1 > m2 && y1 > y2)
    {
        int a = 0;
        if(m2 == 1)
        {
            a = 31  + d2-d1;
        }
        else if(m2 == 2)
        {
            a = 28  + d2-d1;
        }
        else if(m2 == 3)
        {
            a = 31  + d2-d1;
        }
        else if(m2 == 4)
        {
            a = 30  + d2-d1;
        }
        else if(m2 == 5)
        {
            a = 31  + d2-d1;
        }
        else if(m2 == 6)
        {
            a = 30  + d2-d1;
        }
        else if(m2 == 7)
        {
            a = 31  + d2-d1;
        }
        else if(m2 == 8)
        {
            a = 31  + d2-d1;
        }
        else if(m2 == 9)
        {
            a = 30  + d2-d1;
        }
        else if(m2 == 10)
        {
            a = 31  + d2-d1;
        }
        else if(m2 == 11)
        {
            a = 30  + d2-d1;
        }
        else if(m2 == 12)
        {
            a = 31  + d2-d1;   
        }
        printf("%d/%d/%d",a,m2-m1-1,y2-y1);
    
    }
    return 0;
}