#include <stdio.h>
#include <string.h>
void main()
{
    char a[20], b[20] = " ";
    printf("enter the string= ");
    gets(a);
    printf("before copying 1st string= %d", a);
    printf("before copying 2st string= %d", b);
    strcpy(b, a);
    printf("after copying 1st string= %d", a);
    printf("after copying 2st string= %d", b);
}