#include <stdio.h>
void main()
{
    int x, y;
    printf("enter the unite= ");
    scanf("%d", &x);
    if (x >= 0 && x <= 20)

        printf("D");

    else if (x > 20 && x <= 40)
        printf("C");

    else if (x > 40 && x <= 60)

        printf("B");

    else if (x > 60 && x <= 80)

        printf("A");
    else
        printf("A+");
}