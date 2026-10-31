#include <stdio.h>
int gcd(int, int);
int lcm(int, int);
int x;
void main()
{
    int a, b;
    printf("enter the two numbers = ");
    scanf("%d %d", &a, &b);
    x = gcd(a, b);
    printf("GCD & LCM of %d and %d is %d and %d respectively", a, b, x, lcm(a, b));
}
gcd(int a, int b)
{
    if (a == 0)
    {
        x = b;
        return b;
    }
    else
        return gcd(b % a, a);
}
lcm(int a, int b)
{
    return (a * b) / x;
}