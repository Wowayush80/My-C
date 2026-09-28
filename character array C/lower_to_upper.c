#include <stdio.h>
void main()
{
    char x[20];
    int i;
    printf("Enter the String = ");
    gets(x);
    printf("String = %s\n", x);
    for (i = 0; x[i] != '\0'; i++)
    {
        if (x[i] >= 97 && x[i] <= 122) // lower checking
            x[i] = x[i] - 32; //to upper
    }
    printf("\n String = %s", x);
}