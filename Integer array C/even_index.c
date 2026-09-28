#include <stdio.h>
void main()
{
    int i, n;
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
    printf("\n----even index----");
    for (i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            printf("\n index[%d]    value[%d] ", i, a[i]);
    }
}