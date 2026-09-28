#include <stdio.h>
void main()
{
    int i, j, sq, k = 1;
    char x = 'A';
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" %d", j);
        }
        for (sq = 2 * k; sq <= 9; sq++)
        {
            printf(" -");
        }
        k++;
        for (j = i; j >= 1; j--)
        {
            printf(" %d", j);
        }
        printf("\n");
    }
}
for (i = 1; i <= 2; i++)
{
    for (j = 1; j <= (2 * i) - 2; j++)
    {
        printf(" %d", k);
        k++;
    }
    for (sq = 3; sq >= i; sq--)
    {
        printf(" *");
    }
    for (sq = 3; sq >= i; sq--)
    {
        printf(" *");
    }
    for (j = i; j >= 1; j--)
    {
        printf(" %d", j);
    }
    printf("\n");
}
