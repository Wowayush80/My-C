#include <stdio.h>
void main()
{
    int n;
    printf("enter the year= ");
    scanf("%d", &n);
    if (n % 400 == 0)
        printf("its a leap year");
    else if (n % 4 == 0 && n % 100 != 0)
        printf("its a leap year");
    else
        printf("its not a leap year");
}
