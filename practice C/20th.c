#include <stdio.h>
void main()
{
    int x, y;
    printf("enter the 2 numbers= ");
    scanf("%d%d", &x, &y);
    (x > y) ? printf("1st number is the greatest") : (y > x) ? printf("2nd number is the greatest")
                                                             : printf(" both numbers are equal");
}