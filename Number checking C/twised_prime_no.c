#include <math.h>
void main()
{
    int a, i, c = 0, rem, rev = 0, x, b = 0;
    printf("enter the number= ");
    scanf("%d", &a);
    for (x = a; a > 0; a = a / 10)
    {
        rem = a % 10;
        rev = (rev * 10) + rem;
    }
    {
        for (i = 1; i <= x; i++)
        {
            if (x % i == 0)
                c++;
        }
    }
    {
        for (i = 1; i <= rev; i++)
        {
            if (rev % i == 0)
                b++;
        }
    }
    if (c == b)
        printf("%d is a twised prime number", x);
    else
        printf("%d is not a twised prime number", x);
}