#include <stdio.h>
void main()
{
    int x, a, b;
    printf("\nfor additon press 1 \nfor subtraction press 2 \nfor multiplication press 3 \nfor divition press 4");
    printf(" \nenter the choice= ");
    scanf("%d", &x);
    switch (x)
    {
    case 1:
        printf("enter the 2 numbers= ");
        scanf("%d%d", &a, &b);
        printf(" the addtion is= %d", a + b);
        break;
    case 2:
        printf("enter the 2 numbers= ");
        scanf("%d%d", &a, &b);
        printf(" the subtraction is= %d", a - b);
        break;
    case 3:
        printf("enter the 2 numbers= ");
        scanf("%d%d", &a, &b);
        printf(" the multiplication is= %d", a * b);
        break;
    case 4:
        printf("enter the 2 numbers= ");
        scanf("%d%d", &a, &b);
        printf(" the divisition is= %d", a / b);
        break;
    }
    return 0;
}