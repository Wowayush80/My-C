#include <stdio.h>
void main()
{
    int i, n, j, min;
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
    min = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            j = i;
        }
    }
    printf("\n Min element=%d index=%d position= %d", min, j, j + 1);
}
