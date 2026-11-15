#include <stdio.h>
int har(int);
void main()
{
    int n;
    printf("enter the number= ");
    scanf("%d", &n);
    if (har(n) == 0)
        printf("yes");
    else
        printf("No");
}
int har(int n)
{
    int i, rem, s = 0;
    for (i = n; n > 0; n = n / 10)
    {
        rem = n % 10;
        s = s + rem;
    }
    if (i % s == 0)
        return 0;
    else
        return 1;
}