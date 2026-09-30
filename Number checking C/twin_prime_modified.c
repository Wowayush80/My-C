#include <stdio.h>
#include <math.h>
void main()
{
    int i, a, b, f = 0, p = 0;
    printf("enter the numbers= ");
    scanf("%d %d", &a, &b);
    {
        for (i = 2; i = a / 2; i++)
        {
            if (a % i == 0)
            {
                f = 1;
                break;
            }
        }
        if (f == 1)
            printf("not a prime number");
        else
            printf("it is a prime number");
    }
    {
        for (i = 2; i = b / 2; i++)
        {
            if (b % i == 0)
            {
                p = 1;
                break;
            }
        }
        if (p == 1)
            printf("not a prime number");
        else
            printf("it is a prime number");
    }
    if (abs(a - b) == 2)
        printf("it is a twin prime number");
    else
        printf("it is not a twin prime number");
}