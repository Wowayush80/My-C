#include <stdio.h>
void main()
{
    int i, j, n, a, k = 2;
    printf("enter the range= ");
    scanf("%d", &n);
    for (i = 2; i <= n; i + 2)
    {

        for (j = i; j <= i + 1; j++)
        {
            k++;
            printf("%d/%d ", i, k);
        }
    }
}
