#include <stdio.h>
void main()
{
    int i, j, k = 1, a = 3, c = 1, b = 1;
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= i; j++)
            printf("- ");
        for (j = k; j <= i; j++)
            printf("1 ");
        for (j = i; j <= a; j++)
            printf("- ");
        a--;
        if (i <= 2)
        {
            for (j = k; j <= c; j++)
                printf("1 ");
        }
        k++;
        c++;
        printf("\n");
    }
    k = 1;
    for (i = 1; i <= 2; i++)
    {
        for (j = 2; j >= i; j--)
            printf("- ");
        for (j = k; j <= i; j++)
            printf("1 ");
        for (j = 1; j <= b; j++)
            printf("- ");
        b += 2;
        for (j = k; j <= i; j++)
            printf("1 ");
        k++;
        printf("\n");
    }
}