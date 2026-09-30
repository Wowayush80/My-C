#include <stdio.h>
void main()
{
    int i, n, rem, s = 0;
    printf("enter the number= ");
    scanf("%d", &n);
    for (i = n; n > 0; n = n / 10)
    {
        rem = n % 10;
        s = s + rem;
    }
    if (i % s == 0)
        printf("%d is a harshad number", i);
    else
        printf("%d is not a harshad number", i);
}