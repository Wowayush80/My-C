#include <stdio.h>
#include <string.h>
void main()
{
    char x[20], *y[20];
    printf("enter the string= ");
    gets(x);
    *y = strdup(x);//dublicate
    printf("after the copy= %s", y);
}