#include <Stdio.h>
void main()
{
    char a[20];
    int i, c = 0;
    printf("enter the string= ");
    gets(a);
    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] != ' ')
            c++;
    }
    printf("string= %s & length= %d", a, c);
}