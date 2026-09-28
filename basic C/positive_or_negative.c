#include <stdio.h>
void main()
{
    int a;
    printf("enter the number= ");
    scanf("%d", &a);
    if (a > 0)
        printf("%d is a positive number", a);
    else if (a == 0)
        printf("%d is a nutral number", a);
    else
        printf("%d is a negative number", a);
    return 0;
}