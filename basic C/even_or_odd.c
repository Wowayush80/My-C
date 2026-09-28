#include <stdio.h>
void main()
{
    int a;
    printf("enter the number= ");
    scanf("%d", &a);
    if (a % 2 == 0)
        printf("%d is a even number", a);
    else
        printf("%d is a odd number", a);
    return 0;
}