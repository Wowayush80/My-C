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
        if (x[i] >= 65 && x[i] <= 90) // upper checking
            x[i] = x[i] + 32; //to lower
    }
    printf("\n String = %s", x);
}