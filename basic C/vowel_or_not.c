#include <stdio.h>
void main()
{
    char x;
    printf("enter the letter= ");
    scanf("%c", &x);
    switch (x)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        printf("Its a vowel");
        break;
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
        printf(" wrong input!!!");
        break;
    case '@':
    case '#':
    case ' ':
        printf(" Special charecter!!");
        break;
    default:
        printf("its a constant");
        break;
    }
    return 0;
}