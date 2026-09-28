#include <stdio.h>
void main()
{
    char x[20], y[20];
    int i;
    printf("enter the string= ");
    gets(x);
    for (i = 0; x[i] != '\0'; i++)
    {
        y[i] = x[i];
    }
    y[i] = '\0'; // remmember this Null is asigned outside
    printf("1st string= %s", x);
    printf("\n2nd string= %s", y);
}