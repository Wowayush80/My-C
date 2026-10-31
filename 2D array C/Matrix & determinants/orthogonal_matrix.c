#include <stdio.h>
void main()
{
    int i, j, r1, c1, r2, c2, k, m, s = 0, f = 0;
    printf("enter the number of rows and columns of= ");
    scanf("%d %d", &r1, &c1);
    r2 = r1, c2 = c1;
    if (r1 != c1)
    {
        int x[r1][c1], y[r2][c2], z[r1][c2];
        for (i = 0; i < r1; i++) //matrix input
        {
            for (j = 0; j < c1; j++)
            {
                printf("enter the number= ");
                scanf("%d", &x[i][j]);
            }
        }
        for (i = 0; i < r1; i++) //matrix print
        {
            for (j = 0; j < c1; j++)
            {
                printf(" %d", x[i][j]);
            }
            printf("\n");
        }
        for (i = 0; i < r1; i++) // transepose of matrix
        {
            for (j = 0; j < c1; j++)
            {
                y[i][j] = x[j][i];
            }
        }
        for (i = 0; i < r1; i++) // multiply both
        {
            for (k = 0; k < r1; k++)
            {
                for (j = 0; j < r2; j++)
                {
                    if (k == 0 && i == 0)
                        m = (x[i][j] * y[j][i]);
                    else
                        m = (x[i][j] * y[j][k]);
                    s = s + m;
                }
                z[i][k] = s;
                s = 0;
            }
        }
        for (i = 0; i < r1; i++) // identity cheaking 
        {
            for (j = 0; j < c2; j++)
            {
                if ((i == j && z[i][j] != 1) || (i != j && z[i][j] != 0))
                {
                    f = 1;
                    break;
                }
            }
            if (f == 1)
                break;
        }
        (f == 0) ? printf("its an orthogonal matrix!!!") : printf("Its not an orthogonal matrix!!!");
    }
    else
        printf("the matrix must be a square!!!");
}