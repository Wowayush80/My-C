#include <stdio.h>
void main()
{
    int i, n, max, j, smax, k;
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
    max = a[0];
    j = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            j = i;
        }
    }
    printf("\nmax element is %d found in the index %d and  at the position %d", max, j, j + 1);
    if (j == 0)
    {
        smax = a[1];
        k = 1;
    }
    else
    {
        smax = a[0];
        k = 0;
    }
    for (i = 0; i < n; i++)
    {
        if (i != j)
        {
            if (a[i] > smax)
            {
                smax = a[i];
                k = i;
            }
        }
    }
    printf("\n second max element is %d found in the index %d and  at the position %d", smax, k, k + 1);
}
