#include <stdio.h>
void main()
{
    int n, i, s = 0;
    printf("enter the range= ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d + ", i);
        s = s + i;
    }
    printf("\n%d", s);
}