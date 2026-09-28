#include <stdio.h>
#include <string.h>
void main()
{
    char x[20], y, *t;
    printf("enter the string= ");
    gets(x);
    printf("enter the letter to be search for= ");
    y=getchar(); //scanf("%c",&y)
    t = strchr(x, y);
    if (t != NULL)
        printf("%c is found", y);
    else
        printf("%c is not found", y);
}