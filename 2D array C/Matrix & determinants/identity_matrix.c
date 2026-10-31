#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i, r, c, j, f = 0;
    printf("enter the number of rows and columns(must be a square matrix) =");
    scanf("%d %d", &r, &c);
    int x[r][c];
    if (r != c)
        exit(0);
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf(" enter the number = ");
            scanf("%d", &x[i][j]);
        }
    }
    printf(" the matrix= \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf(" %d", x[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if ((i == j && x[i][j] != 1) || (i != j && x[i][j] != 0))
            {
                f = 1;
                break;
            }
        }
        if (f == 1)
            break;
    }
    if (f == 0)
        printf("its an identity matrix!!!\n");
    else
        printf("it is not an identity matrix!!!\n");
}