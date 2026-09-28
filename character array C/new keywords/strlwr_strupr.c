#include <stdio.h>
#include <string.h>
void main()
{
    char x[20];
    printf("enter the string= ");
    gets(x);
    printf("%s", strlwr(x)); // lower
}
#include <stdio.h>
#include <string.h>
void main()
{
    char x[20];
    printf("enter the string= ");
    gets(x);
    printf("%s", strupr(x)); // upper
}
