#include <stdio.h>
void main()
{
    int x, a, b;
    printf(" press 1 for add press 2 for sub press 3 of div and press 4 for mul");
    printf("\nenter the choice= ");
    scanf("%d", &x);
    if (x == 1)
    {
        printf(" enter the 2 numbers= ");
        scanf("%d%d", &a, &b);
        printf("addtion is= %d", a + b);
    }
    else if (x == 2)
    {
        printf(" enter the 2 numbers= ");
        scanf("%d%d", &a, &b);
        printf(" subtraction is= %d", a - b);
    }
    else if (x == 3)
    {
        printf(" enter the 2 numbers= ");
        scanf("%d%d", &a, &b);
        printf(" division is= %d", a / b);
    }
    else if (x == 4)
    {
        printf(" enter the 2 numbers= ");
        scanf("%d%d", &a, &b);
        printf(" mutiplication is= %d", a * b);
    }
    else
        printf(" you are a moron!!!");
}