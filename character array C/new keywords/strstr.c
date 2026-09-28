#include <stdio.h>
#include <string.h>
void main ()
{
char x[20], y[20],*t;
printf("enter the string= ");
gets(x);
printf("enter the string to be search for= ");
gets(y);
t=strstr(x,y);
if(t!=NULL)
printf("%s is found",y);
else
printf("%s is not found",y);
}