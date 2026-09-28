#include <stdio.h>
void main()
{
    int i, n, x, s = 0, rem, y, rem1, m = 1;
    printf("enter the number= ");
    scanf("%d", &n);
    for (x = n; n > 0; n = n / 10)
    {
        rem = n % 10;
        s = s + rem;
    }
    for (y = x; x > 0; x = x / 10)
    {
        rem1 = x % 10;
        m = m * rem1;
    }
    if (s == m)
        printf("%d is a spy number", y);
    else
        printf("%d is not a spy number", y);
}