#include <math.h>
#include <stdio.h>
int main()
{
    int i, x, n, c = 0, sq, p, a, b;
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
        printf("it is a kaprekar number");
    else
        printf("it is not a kaprekar number");
}