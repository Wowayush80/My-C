#include <stdio.h>
void main()
{
    int n, x, p = 0, i, k = 0;
    printf("enter the base= ");
    scanf("%d", &n);
    printf("enter the power= ");
    scanf("%d", &x);
    p = n;
    for (i = 1; i <= (x - 1); i++)
    {
        p = n * p;
    }
    printf("%d^%d= %d", n, x, p);
}