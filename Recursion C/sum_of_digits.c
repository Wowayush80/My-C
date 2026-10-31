#include <stdio.h>
int sum(int);
void main()
{
    int r, x;
    printf("enter the number = ");
    scanf("%d", &x);
    if (x < 0)
        printf(" sum of digits can't be possible for negetive number!!!");
    else
    {
        r = sum(x);
        printf(" sum of digits of %d is %d", x, r);
    }
}
sum(int n)
{
    if (n == 0)
        return 0;
    else
        return (n % 10 + sum(n / 10));
}