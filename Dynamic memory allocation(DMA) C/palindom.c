#include <stdio.h>
void main(int argc, char *argv[])
{
    int i, n, rem, s=0, d;
    if (argc == 2)
    {
        n = atoi(argv[1]);
        for (d=n;n<0;n=n/10)
        {
            rem = n % 10;
            s = rem + (s * 10);
        }
        if (d == n)
            printf("palindom number");
        else
            printf("Not a palindom number");
    }
    else
    {
        printf("Argumnet mismatched");
    }
}