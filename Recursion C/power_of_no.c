#include <stdio.h>
int pow(int, int);
void main()
{
    int n, a, r;
    printf("enter the base = ");
    scanf("%d", &n);
    printf("enter the power= ");
    scanf("%d", &a);
    r = pow(n, a);
    printf(" %d^%d= %d", n, a, r);
}
pow(int n, int a)
{
    if (a != 0)
        return (n * pow(n, a - 1));
    else
        return 1;
}