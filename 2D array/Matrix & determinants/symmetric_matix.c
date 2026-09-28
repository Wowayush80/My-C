#include <stdio.h>
void main()
{
    int j, i, r, c, f = 0;
    printf("enter the number of rows & columns= ");
    scanf("%d %d", &r, &c);
    int x[r][c], y[r][c];
    if (r == c)
    {
        for (i = 0; i < r; i++) // take input of the matrix
        {
            for (j = 0; j < c; j++)
            {
                printf("enter the number of 1st matrix= ");
                scanf("%d", &x[i][j]);
            }
        }
        printf("\nthe matrix= \n"); // 1st print
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                printf("%d ", x[i][j]);
            }
            printf("\n");
        }
        printf("\ntranspose of matrix=\n"); //do the transpose
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                y[i][j] = x[j][i];
                printf("%d ", y[i][j]);
            }
            printf("\n");
        }
        for (i = 0; i < r; i++)  // symmetric checking
        {
            for (j = 0; j < c; j++)
            {
                if (y[i][j] != x[i][j])
                {
                    f = 1;
                    break;
                }
            }
            printf("\n");
        }
        if (f == 1)
            printf(" Not a symmetric matrix!!!");
        else
            printf("it is a symmetric matrix!!!");
    }
    else
        printf("marix is not square so transpose can't be possible");
}