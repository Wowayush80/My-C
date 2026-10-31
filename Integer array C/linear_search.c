#include <stdio.h>
void main()
{
    int i, f = 0, ser, n, p;
    printf("enter the range= ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        printf("enter the enter number= ");
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nenter the number to be searched for= ");
    scanf("%d", &ser);
    for (i = 0; i < n; i++)
    {
        if (a[i] == ser)
        {
            p = i;
            f = 1;
            break;
        }
    }
    if (f == 1)
        printf(" number %d is found at position %d in the array", ser, p + 1);
    else
        printf(" number not found!!");
}