#include <stdio.h>
#include <string.h>
void main()
{
    char x[30];
    int i, len, c, f;
    printf("enter the string= ");
    gets(x);
    for (i = 0; x[i] != '\0'; i++)
    {
        if (x[i] >= 97 && x[i] <= 122) // lower checking
            x[i] = x[i] - 32;          // to upper
    }
    len = strlen(x);
    for (i = 0; x[i] != '\0'; i++)
    {
        if (x[i] == ' ')
        {
            f = x[i + 1];
            c = i;
        }
    }
    for (i = c + 1; x[i] != '\0'; i++)
    {
        printf("%c", x[i]);
    }
    printf(" ");
    for (i = 0; i < c; i++)
    {
        printf("%c", x[i]);
    }
}