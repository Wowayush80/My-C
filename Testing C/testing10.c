#include <stdio.h>
#define f(rem,m,s)                 \
    for (j = rem; j >= 1; j--) \
        m = m * j;             \
    s = s + m;                 \
    m = 1;                     \
    k(n)

#define k(n)                       \
    for (i = n; n > 0; n = n / 10) \
    {                              \
        rem = n % 10;              \
        f(rem,1,0);                    \
    }

void main()
{
    int i, n, j, rem, m = 1, s = 0;
    printf("enter the number= ");
    scanf("%d", &n);
    k(n);
    if (s == i)
        printf("%d is a krishnamurti number", i);
    else
        printf("%d is not a krishnamurti number", i);
}