#include <stdio.h>
void main()
{
    char x[100000];
    int i, c = 0, f = 0;
    printf("enter the number= ");
    gets(x);
    for (i = 0; x[i] != '\0'; i++)
    {
        if (i == 0 && x[i] == '0')
        {
            f = 1;
            break;
        }
        else if (x[i] == '0' && i != 0)
        {
            c = 1;
            break;
        }
    }
    if (c == 1 && f == 0)
        printf("Duck number!!!");
    else
        printf("not a duck number!!!");
}