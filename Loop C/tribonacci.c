#include <stdio.h>
void main()
{
    int i, n, a = 1, b = 1, c = 1, d;
    printf("enter the range= ");
    scanf("%d", &n);
    printf("%d %d %d ", a, b, c);
    for (i = 1; i <= n - 3; i++)
    {
        d = a + b + c;
        printf("%d ", d);
        a = b;
        b = c;
        c = d;
    }
}