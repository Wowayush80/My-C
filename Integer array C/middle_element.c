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
        printf("\nmiddle element= %d", a[n / 2]);
    else
        printf("\nThe total number of elements must be an odd number to find the middle element");
}