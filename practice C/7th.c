#include <stdio.h>
void main()
{
    int n, a;
    printf(" enter the days= ");
    scanf("%d", &n);
    a = 86400 * n;
    printf("so, %d days= %d seconds", n, a);
}