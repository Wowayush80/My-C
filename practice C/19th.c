#include <stdio.h>
void main()
{
    int x;
    printf("enter the number= ");
    scanf("%d", &x);
    (x % 2 == 0) ? printf("its a even number") : printf("its a odd number");
}