#include <stdio.h>
void main()
{
    int n, a, p;
    printf(" enter the length of each side of square= ");
    scanf("%d", &n);
    a = n * n;
    p = 4 * n;
    printf("%d is the area and %d is the perimeter", a, p);
}