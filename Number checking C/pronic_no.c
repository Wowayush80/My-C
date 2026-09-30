#include <stdio.h>
void main()
{
    int i, n, f = 0;
    printf("enter the number= ");
    scanf("%d", &n);
    {
        for (i = 1; i <= n; i++)

            if ((i) * (i + 1) == n)
            {
                f == 1;
                break;
            }
    }
    if (f == 1)
        printf("%d is a pronic number", n);
    else
        printf("%d is not a pronic number", n);
}