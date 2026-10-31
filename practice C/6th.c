#include <stdio.h>
void main()
{
    int n, a, b;
    printf(" enter the seconds= ");
    scanf("%d", &n);
    a = n / 60;
    b = n % 60;
    printf("so, %d seconds= %d minutes and %d seconds", n, a, b);
}