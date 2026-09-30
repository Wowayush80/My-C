#include <stdio.h>
void main()
{
    int i, n;
    printf("enter the range= ");
    scanf("%d", &n);
    for (i = 2; i <= n; i = i + 3)
    {
        printf("%d ", i);
    }
}