#include <stdio.h>
void main()
{
    int j, i, r, c;
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
        printf("\n1st matrix= \n"); // 1st print
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                printf("%d ", x[i][j]);
            }
            printf("\n");
        }
        printf("\ntranspose of matrix=\n");  // transpose checking
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                y[i][j] = x[j][i];
                printf("%d ", y[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("marix is not square so transpose can't be possible");
}