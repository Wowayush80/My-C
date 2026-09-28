#include <stdio.h>
void main()
{
    int d, h, a, b, c;
    printf("enter the day= ");
    scanf("%d", &d);
    a = d * 24;
    printf("the hour is= %d", a);
    printf("\nenter the hour= ");
    scanf("%d", &h);
    b = h / 24;
    c = h % 24;
    printf("the time is= %d days %d hours", b, c);
    return 0;
}