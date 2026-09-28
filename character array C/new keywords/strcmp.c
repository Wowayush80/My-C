#include <stdio.h>
#include <string.h>
void main()
{
    char a[20], b[20];
    printf("enter the string= ");
    gets(a);
    printf("enter the string= ");
    gets(b);
    puts(a);
    int i;
    i = strcmp(a, b);
    if (i == 0) // 0=true 1=false (it is reverse in case of charecter array)
        printf("string matched");
    else
        printf("string not mactched");
}