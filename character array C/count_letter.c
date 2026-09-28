#include <stdio.h>
void main()
{
    char x[20], a;
    int i, c = 0;
    printf("enter the words= ");
    gets(x);
    printf("enter the letter to be counted= ");
    scanf("%c", &a);
    for (i = 0; x[i] != '\0'; i++)
    {
        if (x[i] == a)
            c++;
    }
    printf(" %c is present %d times", a, c);
}