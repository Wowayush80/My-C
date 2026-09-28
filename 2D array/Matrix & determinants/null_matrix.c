#include <stdio.h>
void main()
{
    int i, j, r, count=0, c;
    printf("enter the number of rows & columns= ");
    scanf("%d %d", &r, &c);
    int x[r][c];
    // input
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
    // null matrix
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (x[i][j] == 0)
                count++;
        }
    }
    if (count == r * c)
        printf("NUll matrix");
    else
        printf("Not a NULL matrix");
}
