#include <stdio.h>
void main()
{
    int i, n, x;
    printf("enter the range= ");
    scanf("%d", &n);
    int a[n];
    // input
    for (i = 0; i < n; i++)
    {
        printf("enter the number= ");
        scanf("%d", &x);
        if (x % 5 == 0)
        {
            a[i] = x;
            a[i + 1] = -1;
            i++;
            n++;
        }
        else
            a[i] = x;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}