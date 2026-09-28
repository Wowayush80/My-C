#include <stdio.h>
int main()
{
    int a, b, c, d, e, f;
    printf("enter the 1st number= ");
    scanf("%d", &a);
    printf("enter the 2nd number= ");
    scanf("%d", &b);
    c = a + b;
    d = a - b;
    e = a * b;
    f = a % b;
    printf("\naddtion= %d", c);
    printf("\nsubtraction= %d", d);
    printf("\nmultiplication= %d", e);
    printf("\ndivition= %d", f);
    return 0;
}