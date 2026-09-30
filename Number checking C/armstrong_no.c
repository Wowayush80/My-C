#include <math.h>
#include <stdio.h>
void main()
{
    int i, n, x, rem = 0, c = 0, a, p, s = 0;
    printf("enter the number= ");
    scanf("%d", &n);
    {
        for (x = n; n > 0; n = n / 10)
            c++;
    }
    for (a = x; x > 0; x = x / 10)
    {
        rem = x % 10;
        p = pow(rem, c);
        s = s + p;
    }
    if (s == a)
        printf("%d is a armstrong number", a);
    else
        printf("%d is not a armstrong number", a);
}