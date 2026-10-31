#include <stdio.h>
void har(int);
void main()
{
    int n;
    printf("enter the number= ");
    scanf("%d", &n);
    har(n);
}
void har(int n)
{
    int i, rem, s = 0;
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