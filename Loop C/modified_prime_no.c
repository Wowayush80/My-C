#include <stdio.h>
void main()
{
    int i, n, f = 0;
    printf("enter the number= ");
    scanf("%d", &n);
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            f = 1;
            break;
        }
    }
    (f == 1) ? printf("Not a prime number") : printf("It's a prime number");
}
