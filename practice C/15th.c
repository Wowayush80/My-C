#include <stdio.h>
void main()
{
    char x;
    printf("enter the letter= ");
    scanf("%c", &x);
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
        printf("its a vowel");
    else if (x == '1' || x == '2' || x == '3' || x == '4' || x == '5' || x == '6' || x == '7' || x == '8' || x == '9' || x == '0')
        printf("its a number");
    else if (x == '#' || x == '%' || x == '*' || x == '$' || x == '?')
        printf("its a special character");
    else
        printf("its a consonant");
}