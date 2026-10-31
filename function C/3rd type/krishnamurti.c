#include <stdio.h>
int kris();
int i, n, j, rem, m = 1, s = 0;
void main()
{
    s = kris();
    if (s == i)
        printf("%d is a krishnamurti number", i);
    else
        printf("%d is not a krishnamurti number", i);
}
int kris()
{

    printf("enter the number= ");
    scanf("%d", &n);
    for (i = n; n > 0; n = n / 10)
    {
        rem = n % 10;
        for (j = rem; j >= 1; j--)
            m = m * j;
        s = s + m;
        m = 1;
    }
    return s;
}