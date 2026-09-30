#include <stdio.h>
void main()
{
    int i, a, b, GCD, LCM;
    printf("enter the number= ");
    scanf("%d %d", &a, &b);
    for (i = 1; i <= a; i++)
    {
        if (a % i == 0 && b % i == 0)
            GCD = i;
    }
    LCM = (a * b) / GCD;
    printf("LCM(%d , %d)= %d", a, b, LCM);
}