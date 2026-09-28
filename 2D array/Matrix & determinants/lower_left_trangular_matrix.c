#include <stdio.h>
void main()
{
    int i, j, r, c;
    printf("enter the number of rows & columns= ");
    scanf("%d %d", &r, &c);
    int x[r][c];
    // input
    if (r == c)
    {
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                printf("enter the number= ");
                scanf("%d", &x[i][j]);
            }
        }
        // output
        printf("\nmatrix= \n");
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                printf("%d ", x[i][j]);
            }
            printf("\n");
        }
        // lower left triangular matrix
        printf("\n lower left triangular matrix\n");
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                if (i >= j)
                    printf(" %d", x[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("the matrix is not square so lower left triangular matrix can't be formed");
}