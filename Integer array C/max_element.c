#include <stdio.h>
void main()
{
    int i, n, j, max;
    printf("enter the range= ");
    scanf("%d", &n);
    int a[n];
    // input
    for (i = 0; i < n; i++)
    {
        printf("enter the number= ");
        scanf("%d", &a[i]);
    }
    // output
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    // checking
    j = 0;
    max = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            j = i;
        }
    }
    printf("\n Max element=%d index=%d position= %d", max, j, j + 1);
}
