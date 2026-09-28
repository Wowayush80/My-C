#include <stdio.h>
void main()
{
    char x[20];
    int i;
    printf("enter the string= ");
    gets(x);
    for (i = 0; x[i] != '\0'; i++)
    {
        printf("%c", x[i]);
    }
}