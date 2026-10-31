#include <stdio.h>
int pri();
int i, n, f = 0;
void main()
{
    f = pri();
    (f == 1) ? printf("Not a prime number") : printf("It's a prime number");
}
int pri()
{

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
    return f;
}