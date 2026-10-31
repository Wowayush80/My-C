#include <stdio.h>
void main()
{
    int x, y;
    printf("enter the unit= ");
    scanf("%d", &x);
    if (x >= 0 && x <= 100)
        y = x * 1;
    else if (x > 100 && x <= 200)
        y = (x - 100) * 2 + 100;
    else if (x > 200 && x <= 400)
        y = (x - 200) * 4 + 300;
    else if (x > 400 && x <= 800)
        y = (x - 400) * 7 + 1100;
    else
        y = (x - 800) * 10 + 4200;
    printf("your bill amount= %d", y);
}