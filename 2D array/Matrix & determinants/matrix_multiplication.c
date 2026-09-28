#include <stdio.h>
void main()
{
    int j, i, r1, c1, r2, c2, k, s = 0, r;
    printf("enter the number of rows & columns= ");
    scanf("%d %d %d %d", &r1, &c1, &r2, &c2);
    int x[r1][c1], y[r2][c2], z[r1][c2];
    if (c1 == r2)
    {
        for (i = 0; i < r1; i++) // take input of both the matrix
        {
            for (j = 0; j < c1; j++)
            {
                printf("enter the number of 1st matrix= ");
                scanf("%d", &x[i][j]);
            }
        }
        for (i = 0; i < r2; i++) // take input of both the matrix
        {
            for (j = 0; j < c2; j++)
            {
                printf("enter the number of 2nd matrix= ");
                scanf("%d", &y[i][j]);
            }
        }
        printf("\n1st matrix= \n"); // 1st print
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                printf("%d ", x[i][j]);
            }
            printf("\n");
        }
        printf("\n2nd matrix= \n"); // 2nd print
        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf("%d ", y[i][j]);
            }
            printf("\n");
        }
        for (i = 0; i < r1; i++)
        {
            for (k = 0; k < r1; k++)
            {
                for (j = 0; j < r2; j++)
                {
                    if (i == 0 && k == 0)
                        r = (x[i][j] * y[j][i]);
                    else
                        r = (x[i][j] * y[j][k]);
                    s = s + r;
                }
                z[i][k] = s;
                s = 0;
            }
        }
        printf("\nMatrix multiplication= \n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf(" %d", z[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("the matrix is not square so subtraction cannot be possible");
    }
}
