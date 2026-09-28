#include <stdio.h>
void main()
{
    int i, n, ser, j = 0, f = 0;
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
        printf("%d ", a[i]);
    }
    for (i = 0; i < n; i = i + 2)
    {
        printf("\n %d ", a[i]);
    }
}
