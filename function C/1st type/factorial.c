#include <stdio.h>
void facto();
void main()
{
    facto();
}
void facto()
{
    int i, n, j = 1;
    printf("enter the range= ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d!= ", i);
        j = j * i;
        printf("%d ", j);
    }
}
