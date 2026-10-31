#include <stdio.h>
#include <math.h>
void arm(int);
void main()
{
    int i;
    printf("enter the number= ");
    scanf("%d", &i);
    arm(i);
}
void arm(int n)
{
    int x, rem = 0, c = 0, a, p, s = 0;
    {
        for (x = n; n > 0; n = n / 10)
            c++;
    }
    for (a = x; x > 0; x = x / 10)
    {
        rem = x % 10;
        p = pow(rem, c);
        s = s + p;
    }
    if (s == a)
        printf("%d is a armstrong number", a);
    else
        printf("%d is not a armstrong number", a);
}