#include <stdio.h>
void main()
{
    char x[20], ser[20];
    int i, j, f = 0, c = 0;
    printf("enter the string= ");
    gets(x);
    printf("enter the word you want to search= ");
    gets(ser);
    for (j = 0, i = 0; i != '\0'; i++)
    {
        if (x[i] == ser[j])
            j++;
        else if (x[i] != ser[j])
            j = 0;
        if (ser[j] == '\0')
            c++;
    }
    if (c != 0)
    {
        printf("substring found!!!");
        printf(" \n %s is found %d times", ser, c);
    }
    else
        printf("substing is not found");
}