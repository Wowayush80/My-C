#include <stdio.h>
void main()
{
    int i, n, j, temp = 0, k = 1;
    printf("enter the range= ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        printf("enter the number= ");
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
        printf("\niteration %d=", k);
        k++;
        printf("\n");
        for (j = 0; j < n; j++)
            printf("%d ", a[j]);
    }
}