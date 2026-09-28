#include <stdio.h>
void main()
{
    int i, n, j = 1;
    printf("enter the range= ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d ", j);
        j = (j * 10) + 1;
    }
}