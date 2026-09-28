#include <stdio.h>
#include <math.h>
void main()
{
    int a, b, c, peri, x, area;
    printf("enter the 3 sides of the triangle= ");
    scanf("%d %d %d", &a, &b, &c);
    peri = a + b + c;
    x = peri / 2;
    area = sqrt(x * (x - a) * (x - b) * (x - c));
    printf("area is %d and perimeter is %d ", area, peri);
}