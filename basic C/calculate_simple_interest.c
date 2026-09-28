#include <stdio.h>
void main()
{
    int p, r, t, a;
    printf("enter the principal, rate of interest and time= ");
    scanf("%d%d%d", &p, &r, &t);
    a = (p * r * t) / 100;
    printf("simple interest= %d", a);
    printf("\ntotal amount= %d", p + a);
    return 0;
}