#include <stdio.h>
void main()
{
    int x;
    printf("enter the year= ");
    scanf("%d", &x);
    (x % 400 == 0) ? printf("it is a leap year") : (x % 4 == 0 && x % 100 != 0) ? printf("it is a leap year")
                                                                                : printf("it is not a leap");
}