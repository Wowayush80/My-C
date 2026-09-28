#include <stdio.h>
void main()
{
    int i, j = 3, n, a, k = 2;
    printf("enter the range= ");
    scanf("%d", &n);
    for (i = 2; i <= n; i++)
    {
        printf("%d/%d! ", i, i);
        k += 2;
        j += 2;
    }
}
