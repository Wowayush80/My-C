#include <stdio.h>
void main()
{
    int n, i, m;
    printf("enter the number= ");
    scanf("%d", &n);
    printf("------------------------\n");
    printf("MULTIPLICATION TABLE OF %d\n", n);
    printf("-------------------------\n");
    for (i = 1; i <= 10; i++)
    {
        m = i * n;
        printf("%d X %d = %d\n", i, n, m);
    }
}