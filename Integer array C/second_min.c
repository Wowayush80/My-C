#include <stdio.h>
void main()
{
    int i, n, min, j, smin, k;
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
    min = a[0];
    j = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            j = i;
        }
    }
    printf("\nmin element is %d found in the index %d and  at the position %d", min, j, j + 1);
    if (j == 0)
    {
        smin = a[1];
        k = 1;
    }
    else
    {
        smin = a[0];
        k = 0;
    }
    for (i = 0; i < n; i++)
    {
        if (i != j)
        {
            if (a[i] < smin)
            {
                smin = a[i];
                k = i;
            }
        }
    }
    printf("\n second min element is %d found in the index %d and  at the position %d", smin, k, k + 1);
}
