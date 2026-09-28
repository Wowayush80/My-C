#include <stdio.h>
void main()
{
    char a[20];
    int i;
    printf("enter the name= ");
    gets(a);

    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] >= 97 && a[i] <= 122)
        {
            a[i] = a[i] - 32;
        }
    }
    for (i = 0; a[i] != '\0'; i++)
    {
        if (i == 0)
        {
            printf("%c.", a[i]);
        }
        else if (a[i] == ' ')
        {
            printf("%c.", a[i + 1]);
        }
    }
}