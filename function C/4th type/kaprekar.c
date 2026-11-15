#include <stdio.h>
#include <math.h>
int kar(int);
void main()
{
    int n;
    printf("enter the number= ");
    scanf("%d", &n);
    if (kar(n) == 1)
        printf("yes");
    else
        printf("No");
}
int kar(int n)
{
    int x, c = 0, sq, p, a, b;
    for (x = n; n > 0; n = n / 10)
    {
        c++;
    }
    sq = x * x;
    p = pow(10, c);
    a = sq % p;
    b = sq / p;
    if (a + b == x)
        return 1;
    else
        return 0;
}