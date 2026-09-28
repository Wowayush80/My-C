#include <stdio.h>
void main()
{
    char x[20];
    int i;
    printf("enter the string= ");
    gets(x);
    for (i = 0; x[i] != '\0'; i++)
    {
        if (x[i] >= 97 && x[i] <= 122) // lower checking
            x[i] = x[i] - 32;          // to upper
    }
    printf("\nconsonant letters----> ");
    for (i = 0; x[i] != '\0'; i++)
    {
        if (x[i] != 'A' && x[i] != 'E' && x[i] != 'I' && x[i] != 'O' && x[i] != 'U')
            printf("%c", x[i]);
        }
}