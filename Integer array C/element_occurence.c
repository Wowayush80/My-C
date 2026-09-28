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
    printf("\nfind the number of occurence of an element present inside the array");
    printf("\nenter the number= ");
    scanf("%d", &ser);
    for (i = 0; i < n; i++)
    {
        if (a[i] == ser)
        {
            j++;
        }
    }
    if (j > 0)
        printf("%d is found %d times in the array", ser, j);
    else
        printf("NOT FOUND!!!");
}