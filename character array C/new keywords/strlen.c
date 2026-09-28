#include <stdio.h>
#include <string.h>
void main ()
{
char x[20];
printf("enter the name= ");
gets(x);
int len;
len=strlen(x); //length of string
printf("length= %d",len);
}