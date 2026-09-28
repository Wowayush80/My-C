#include <Stdio.h>
void main()
{
    char a[20];
    int i;
    printf("enter the string= ");
    gets(a);
    for (i = 0; a[i] != '\0'; i++)
    {
    }
    printf("string= %s & length= %d", a, i);
}