#include <stdio.h>
void main()
{
    int x, y;
    printf("enter the number= ");
    scanf("%d", &x);
    y = x * x;
    if (y % 10 == x || y % 100 == x)
        printf("it is  an autopolymorphic number");
    else
        printf(" not an autopoymorphic number");
}