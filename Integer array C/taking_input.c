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
}