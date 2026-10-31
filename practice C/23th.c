#include <stdio.h>
void main()
{
    int i, n, j = 2, s = 0;
    printf("enter the range= ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++, j = j + 3)
    {
        printf(" %d", j);
        s = s + j;
    }
    printf("\n sum= %d", s);
}