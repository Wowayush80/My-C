#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    int i, n, f = 1;
    if (!(argc == 2))
        exit(0);
    n = atoi(argv[1]);
    for (i = 1; i <= n; i++)
    {
        if (i == n)
            printf("%d", i);
        else
            printf("%d * ", i);
        f *= i;
    }
    printf(" = %d", f);
    return 0;
}