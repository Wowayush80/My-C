#include <math.h>
void main()
{
    int a, i, c = 0;
    printf("enter the number= ");
    scanf("%d", &a);

    for (i = 1; i <= a; i++)
    {
        if (a % i == 0)
            c++;
    }
    if (c == 2)
        printf("%d is a prime number", a);
    else
        printf("%d is not a prime number", a);
}