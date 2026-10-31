#include <stdio.h>
void main()
{
    int n, a, p;
    printf(" enter the length of each side of cube= ");
    scanf("%d", &n);
    a = 6 * (n * n);
    p = 12 * n;
    printf("%d is the area and %d is the perimeter", a, p);
}