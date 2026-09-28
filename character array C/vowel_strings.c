#include <stdio.h>
void main()
{
    char x[20];
    int i;
    printf("enter the string= ");
    gets(x);
    printf("\n----vowel letters----");
    for (i = 0; x[i] != '\0'; i++)
    {
        switch (x[i])
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c", x[i]);
        default:
            printf("");
        }
    }
}