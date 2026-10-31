#include <stdio.h>
void tribo(int);
void main()
{
    int x;
    printf("Enter the range = ");
    scanf("%d", &x);
    tribo(x);
}
void tribo(int n)
{
    int i, a = 1, b = 1, c = 1, d;
    printf("%d %d %d", a, b, c);
    for (i = 1; i <= n - 3; i++)
    {
        d = a + b + c;
        printf("%d ", d);
        a = b;
        b = c;
        c = d;
    }
}