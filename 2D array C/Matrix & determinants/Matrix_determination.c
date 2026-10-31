#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i, n, j, k, r, c, q = 0, s = 0;
    printf("enter the number of row and column(must be 3x3 or 2x2 matrix)= ");
    scanf("%d %d", &r, &c);
    int a[r][c], x[(r - 1) * (r - 1)];
    if (r != c)
        exit(0);
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("enter the number= ");
            scanf("%d", &a[i][j]);
        }
    }
    printf("the matrix--->\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf(" %d", a[i][j]);
        }
        printf("\n");
    }
    if (r == 2)
    {
        printf("solved= %d", (a[0][0] * a[1][1] - a[0][1] * a[1][0]));
        exit(0);
    }
    for (k = 0; k < r; k++, q = 0)
    {
        for (i = 0; i < r; i++)
            if (k != i)
            {
                for (j = 0; j < c; j++)
                    if (j != 0)
                        x[q++] = a[i][j];
            }
        if (k == 1)
            s -= a[k][0] * (x[0] * x[3] - x[1] * x[2]);
        else
            s += a[k][0] * (x[0] * x[3] - x[1] * x[2]);
    }
    printf("Solved=== %d", s);
}