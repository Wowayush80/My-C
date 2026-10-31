#include <stdio.h>
int pro();
int i, n, f = 0;
void main()
{
    f = pro();
    if (f == 1)
        printf("%d is a pronic number", n);
    else
        printf("%d is not a pronic number", n);
}
int pro()
{

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
    return f;
}