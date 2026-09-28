#include <stdio.h>
void main()
{
    int j, i, r, c;
    printf("enter the number of rows & columns= ");
    scanf("%d %d", &r, &c);
    int x[r][c], y[r][c], z[r][c];
    if (r == c)
    {
        for (i = 0; i < r; i++) // take input of both the matrix
        {
            for (j = 0; j < c; j++)
            {
                printf("enter the number of 1st matrix= ");
                scanf("%d", &x[i][j]);
                printf("enter the number of 2nd matrix= ");
                scanf("%d", &y[i][j]);
            }
        }
        printf("\n1st matrix= \n"); // 1st print
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                printf("%d ", x[i][j]);
            }
            printf("\n");
        }
        printf("\n2nd matrix= \n"); // 2nd print
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                printf("%d ", y[i][j]);
            }
            printf("\n");
        }
        printf("\nMatrix subtraction= \n"); // subtraction
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                z[i][j] = x[i][j] - y[i][j];
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
