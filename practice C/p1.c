#include <stdio.h>
void main()
{
    int i, x, s = 1;
    printf("no= ");
    scanf("%d", &x);
    for (i = 1; i <= x; i++)
        s = s * i;
    printf("%d!= %d", x, s);
}