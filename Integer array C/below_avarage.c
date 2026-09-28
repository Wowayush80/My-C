#include <stdio.h>
void main()
{
    int i, n, s = 0, avg, b;
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
    {
        avg = s / n;
        printf("average= %d ", avg);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] < avg)
            b = a[i];
    }
    printf(" below average= %d", b);
}