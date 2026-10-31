#include <stdio.h>
int magic();
int n, i, x, rem, s = 0, rem1, s1 = 0;
void main()
{
    s1 = magic();
    if (s1 == 1)
        printf("%d is a magic number", x);
    else
        printf("%d is not a magic number", x);
}
int magic()
{

    printf("Is this number magic or not?");
    printf("\nenter the number= ");
    scanf("%d", &n);
    for (x = n; n > 0; n = n / 10)
    {
        rem = n % 10;
        s = s + rem;
    }
    for (; s > 0; s = s / 10)
    {
        rem1 = s % 10;
        s1 = s1 + rem1;
    }
    return s1;
}