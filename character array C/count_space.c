#include <stdio.h>
void main()
{
    char x[20];
    int i, c = 0, v = 0, s = 0;
    printf("enter the string= ");
    gets(x);
    for (i = 0; x[i] != '\0'; i++)
    {
        if (x[i] >= 97 && x[i] <= 122) // lower checking
            x[i] = x[i] - 32;          // to upper
    }
    for (i = 0; x[i] != '\0'; i++)
    {
        if (x[i] == 'A' || x[i] == 'E' || x[i] == 'I' || x[i] == 'O' || x[i] == 'U')
        {
            printf("%c", x[i]);
            v++;
        }
        else if (x[i] == ' ')
        {
            printf("%c", x[i]);
            s++;
        }
        else
        {
            printf("%c", x[i]);
            c++;
        }
    }
    printf("total vowels are %d, consunants are %d and spaces are %d", v, c, s);
}