#include <stdio.h>
void main()
{
    int a;
    printf("enter the number= ");
    scanf("%d", &a);
    if (a == 0)
        printf("%d is a nutral number", a);
    else if (a % 7 == 0 && a % 10 == 7)
        printf("%d is a buzz number", a);
    else
        printf("%d is not a buzz number", a);
    return 0;
}