#include <stdio.h>
void main()
{
    int i, j, k = 4, c, m = 1;
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= i; j++)
            printf("* ");
        for (c = i; c <= k; c++)
        {
            printf("- ");
        }
        for (j = i; j >= 1; j--)
            printf("* ");
        printf("\n");
        k--;
    }
    for (i = 2; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
            printf("* ");

        for (c = i; c >= m; c--)
            printf("- ");

        for (j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
        m -= 3;
    }
}
