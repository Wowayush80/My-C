#include <stdio.h>
void main()
{
    int x;
    printf("enter the number= ");
    scanf("%d", &x);
    (x > 0) ? printf("%d is positive number", x) : (x == 0) ? printf("nutral number")
                                                            : printf("%d is a negative number", x);
    return 0;
}