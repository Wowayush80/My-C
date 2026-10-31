#include <stdio.h>
#include <math.h>
int twin();

void main()
{
    int a, b;
    printf("enter the 2 numbers= ");
    scanf("%d %d", &a, &b);
    twin(a, b);
    if ((a - b) == 2)
        printf("\nit is a twin prime number");
    else
        printf("\nit is not a twin prime number");
}
int twin(int a, int b)
{
    int i, c = 0, h = 0;

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
}