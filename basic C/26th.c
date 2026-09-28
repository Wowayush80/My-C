#include <stdio.h>
void main()
{
    int x, y;
    printf("enter the unite= ");
    scanf("%d", &x);
    if (x >= 0 && x <= 200)
    {
        y = x * 1;
        printf(" bill= %d", y);
    }
    else if (x >= 200 && x <= 400)
    {
        y = 200 + (x - 200) * 3;
        printf(" bill= %d", y);
    }
    else if (x >= 400 && x <= 600)
    {
        y = 800 + (x - 400) * 5;
        printf(" bill= %d", y);
    }
    else
    {
        y = 1800 + (x - 600) * 10;
        printf(" bill= %d", y);
    }
}