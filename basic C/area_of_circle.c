#include <stdio.h>
void main()
{
    float r, ar, pr;
    printf("enter the radius= ");
    scanf("%f", &r);
    ar = 3.14 * r * r;
    pr = 2 * 3.14 * r;
    printf(" the area is= %f", ar);
    printf("\nthe perimeter= %f", pr);
    return 0;
}