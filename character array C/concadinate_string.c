#include <stdio.h>
void main()
{
    char x[20], y[20], z[40];
    int i, j;
    printf("enter the string= ");
    gets(x);
    printf("enter the string= ");
    gets(y);
    for (i = 0; x[i] != '\0'; i++)
    {
        z[i] = x[i];
    }
    z[i] = ' ';
    for (i = i + 1, j = 0; y[j] != '\0'; j++, i++)
    {
        z[i] = y[j];
    }
    z[i] = '\0'; // remmember this Null is asigned outside
    printf("\nboth are combined into= %s", z);
}