#include <stdio.h>
void main()
{
    int i, n, a = 0;
    printf("enter the number= ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
            a++;
    }
    if (a == 2)
        printf("prime number");
    else
        printf("not a prime number");
}