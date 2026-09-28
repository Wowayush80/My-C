#include <stdio.h>
void main()
{
    int a, b, d, e;
    printf("enter the length and breadth of the rectangle= ");
    scanf("%d%d", &a, &b);
    d = a * b;
    printf("\narea is %d", d);
    e = 2 * (a + b);
    printf("\nperimeter is %d", e);
    return 0;
}