#include <stdio.h>
#include <string.h>
void main()
{
    char x[20], y[20];
    printf("enter the string= ");
    gets(x);
    printf("enter the string= ");
    gets(y);
    printf("1st string before merge= %s", x);
    printf("2nd string before merge= %s", y);
    strcat(x, y);
    printf("\n1st string after merge= %s", x);
    printf("\n2nd string after merge= %s", y);
}