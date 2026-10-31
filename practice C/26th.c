#include <math.h>
void main()
{
    int x, n, i, p, a, b, sq, c = 0;
    printf("enter the number= ");
    scanf("%d", &n);
    for (x = n; n > 0; n = n / 10)
    {
        c++;
    }
    sq = x * x;
    p = pow(10, c);
    a = sq % p;
    b = sq / p;
    if (a + b == x)
        printf(" karpekar number");
    else
        printf("NOT a karpekar");
}