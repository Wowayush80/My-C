#include <stdio.h>
void main()
{
    int i, n, s = 0, avg;
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
        s = s + a[i];
    }
    avg = s / n;
    printf("average= %d ", avg);
}