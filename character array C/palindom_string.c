#include <stdio.h>
#include <string.h>
void main()
{
    char x[20];
    int i, f = 0, len, j;
    printf("enter the string= ");
    gets(x);
    len = strlen(x);
    strupr(x);
    for (j = len - 1, i = 0; i <= j; i++, j--)
    {
        if (x[i] != x[j])
        {
            f = 1;
            break;
        }
    }
    if (f == 1)
        printf("\nnot a palindom String");
    else
        printf("\n palindom String");
}