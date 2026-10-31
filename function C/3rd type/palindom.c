#include <stdio.h>
int palin();
int i, n, x, rem = 0;
void main()
{
    rem = palin();
    (x == rem) ? printf(" \nit is a palindom number") : printf("\nit is not a palindom number");
}
int palin()
{

    printf("enter the number= ");
    scanf("%d", &n);
    for (x = n; n > 0; n = n / 10)
        rem = rem * 10 + (n % 10);
    printf("reverse of %d is %d", x, rem);
    return rem;
}