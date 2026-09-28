#include <stdio.h>
void main()
{
    int i, j, x;
    printf("enter the range= ");
    scanf("%d", &x);
    for (i = 1; i <= x; i++)
    {
        if (i == 1 || i == x)
        {
            for (j = 1; j <= x; j++)
                printf(" 1");
        }
        else
        {
            for (j = 1; j <= 1; j++)
            {
                printf(" 1");
            }

            for (j = 1; j <= (x - 2); j++)
            {
                printf(" -");
            }
            for (j = 1; j <= 1; j++)
            {
                printf(" 1");
            }
        }
        printf("\n");
    }
}