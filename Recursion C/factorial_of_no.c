#include <stdio.h>
int fact(int);
void main()
{
    int n;
    printf("enter the number = ");
    scanf("%d", &n);
    if (n < 0)
        printf(" factorial can't be possible for negetive number!!!");
    else
        printf(" factorial of %d is %d", n, fact(n));
}
fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fact(n - 1);
}