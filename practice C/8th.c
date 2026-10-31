#include <stdio.h>
void main()
{
    int n, a, b;
    printf(" enter the seconds= ");
    scanf("%d", &n);
    a = n / 86400;
    b = n % 86400;
    printf("so, %d seconds= %d days and %d seconds", n, a, b);
}