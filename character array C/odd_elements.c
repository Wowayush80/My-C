#include <stdio.h>
void main()
{
    char x[20];
    int i, j;
    printf("enter the string= ");
    gets(x);
    printf("print the character present in the odd element\n");
    for (i = 1; x[i] != '\0'; i = i + 2)
    {
        printf("%c", x[i]);
    }
}