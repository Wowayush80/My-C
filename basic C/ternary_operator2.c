#include <stdio.h>
void main()
{
    int x, y, z;
    printf("enter the 3 number= ");
    scanf("%d%d%d", &x, &y, &z);
    (x > y && x > z) ? printf("1st number is greater") : (z > x && z > y) ? printf("3rd number is greater")
                                                     : (y > x && y > z)   ? printf("2nd number is greater")
                                                                          : printf("all are equal");
    return 0;
}