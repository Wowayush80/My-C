#include <stdio.h>
void main()
{
    int n, a;
    printf(" enter the minutes= ");
    scanf("%d", &n);
    a = 60 * n;
    printf("so, %d minutes= %d seconds", n, a);
}