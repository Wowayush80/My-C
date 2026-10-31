#include <stdio.h>
void main()
{
    int i, n;
    printf("enter the range= ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        printf("enter the number = ");
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf(" %d", a[i]);
    }
    if (n % 2 == 1)
    {
        for (i = 0; i < n; i++)
            if (n / 2 != i)
            {
                printf(" \n%d ", a[i]);
            }
    }
    else
        printf("\nThe total number of elements must be an odd number to find the middle element");
}