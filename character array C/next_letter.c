#include <stdio.h>
void main()
{
    char x[30];
    int i;
    printf("enter a word= ");
    gets(x);
    for (i = 0; x[i] != '\0'; i++)
    {
        if (x[i] == 'z' || x[i] == 'Z')
        {
            x[i] = x[i] - 25;
        }
        else if ((x[i] >= 65 && x[i] <= 89) || (x[i] >= 97 && x[i] <= 121))
        {
            x[i] = x[i] + 1;
        }
    }
    printf("New word= %s", x);
}