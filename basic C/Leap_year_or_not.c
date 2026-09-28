#include <stdio.h>
int main()
{
    int a;
    printf("Enter the year= ");
    scanf("%d", &a);
    if (a % 4 == 0 || a % 400 == 0)
        printf("it's a leap year");
    else
        printf("it's not a leap year");
    return 0;
}