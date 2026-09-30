#include <math.h>
#include <stdio.h>
void main()
{
    int a, b, i, c = 0, h = 0;
    printf("enter the 2 numbers= ");
    scanf("%d %d", &a, &b);
    {
        for (i = 1; i <= a; i++)
        {
            if (a % i == 0)
                c++;
        }
        if (c == 2)
            printf("%d is a prime number", a);
        else
            printf("%d is not a prime number", a);
    }
    {
        for (i = 1; i <= b; i++)
        {
            if (b % i == 0)
                h++;
        }
        if (h == 2)
            printf("\n%d is a prime number", b);
        else
            printf("\n%d is not a prime number", b);
    }
    if (abs(a - b) == 2)
        printf("\nit is a twin prime number");
    else
        printf("\nit is not a twin prime number");
}