#include <stdio.h>
void main()
{
    int i, a, b, GCD;
    printf("enter the two numbers= ");
    scanf("%d %d", &a, &b);
    for (i = 1; i <= a; i++)
    {
        if (a % i == 0 && b % i == 0)

            GCD = i;
    }
    if (GCD == 1)
        printf("this are co-prime number");
    else
        printf("this are not co-prime number");
}