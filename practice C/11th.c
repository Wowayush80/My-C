#include <stdio.h>
void main()
{
    int x;
    printf("enter the number= ");
    scanf("%d", &x);
    if (x % 7 == 0 && x % 10 == 7)
        printf("it is a buzz number");
    else
        printf("it is not a buzz number");
}