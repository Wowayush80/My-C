#include <stdio.h>
#include <string.h>
void main()
{
    char x[50], y[50];
    int i, j, c = 0, swap, len;
    printf("enter the name= ");
    gets(x);
    strupr(x);
    strcpy(y, x);
    len = strlen(x);
    swap = strlen(y);
    for (i = len - 1; i >= 0; i--)
    {
        if (x[i] == ' ')
        {
            c = i;
            for (j = c + 1; j < swap; j++)
            {
                printf("%c", y[j]);
            }
            swap = c;
            printf(" ");
        }
        else if (i == 0)
        {
            for (j = 0; j < c; j++)
            {
                printf("%c", y[j]);
            }
        }
    }
}