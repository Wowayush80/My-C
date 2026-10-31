#include <stdio.h>
void kar(int);
void main()
{
    int n;
    printf("enter the number= ");
    scanf("%d", &n);
    kar(n);
}
void kar(int n)
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
        printf("it is a kaprekar number");
    else
        printf("it is not a kaprekar number");
}