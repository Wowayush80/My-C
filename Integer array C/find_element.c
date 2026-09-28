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
    printf("\nenter the number to be searched for= ");
    scanf("%d", &ser);
    for (i = 0; i < n; i++)
    {
        if (a[i] == ser)
        {
            f = 1;
            j = i;
            break;
        }
    }
    if (f == 1)
        printf("%d found at index %d and at the position %d", a[i], i, j + 1);
    else
        printf("NOT FOUND!!!");
}
