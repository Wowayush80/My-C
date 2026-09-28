#include <stdio.h>
int main()
{
    int x, y, i, sum;
    printf("Enter the first no = ");
    scanf("%d", &x);
    printf("Enter the second no = ");
    scanf("%d", &y);
    sum = x + y;
    printf("Sum =%d ", sum);
    for (i = 0; i <= x; i++)
    {
    printf("%d", i);
        printf("\n");
    }
    return 0;
}