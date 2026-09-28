// selection sort
#include <stdio.h>
void main()
{
    int n, i, j, pos, swap, k = 1;
    int a[100];
    printf("Enter number of elements\n");
    scanf("%d", &n); // n=5
    printf("Enter %d integers\n", n);
    // input loop
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    // selection
    for (i = 0; i < (n - 1); i++)
    {
        pos = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[pos] > a[j])
                pos = j;
        }

        swap = a[i];
        a[i] = a[pos];
        a[pos] = swap;

        printf("After  Iteration = %d:\n", k);
        for (j = 0; j < n; j++)
            printf("%d ", a[j]);
        printf("\n");
        k++;
    }
}