#include <stdio.h>
void main()
{
    int i, j, r, count = 0, c, f = 0;
    printf("enter the number of rows & columns= ");
    scanf("%d %d", &r, &c);
    int x[r][c], y[r][c];
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
        printf("\ntranspose matrix");
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                y[i][j] = x[j][i];
                printf("%d ", y[i][j]);
            }
            printf("\n");
        }
        // skewsymmeric
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                if (x[i][j] != (-1 * y[i][j]) && i != j)
                {
                    f = 1;
                    break;
                }
                if (f == 1) // pulling out from the outter loop
                    break;
            }
        }
        if (f == 0)
            printf("\nSkewsymmetric matrix!!!");
        else
            printf("\nNot a Skewsymmetric matrix!!!");
    }
    else
        printf("matrix is not square so the checking is not possible");
}