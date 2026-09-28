#include <stdio.h>
void main()
{
    char x[20], y[20];
    int i, f = 0;
    printf("Enter the 1st String = ");
    gets(x);
    printf("Enter the 2nd String = ");
    gets(y);
    //turning both into caps
    for (i = 0; x[i] != '\0'; i++)
    {
        if (x[i] >= 97 && x[i] <= 122)
            x[i] = x[i] - 32;
    }
    for (i = 0; y[i] != '\0'; i++)
    {
        if (y[i] >= 97 && y[i] <= 122)
            y[i] = y[i] - 32;
    }
    printf("\n1st String = %s", x);
    printf("\n2nd String = %s", y);
    // compare
    for (i = 0; x[i] != '\0' || y[i] != '\0'; i++) // notice loop structure
    {
        if (x[i] != y[i])
        {
            f = 1;
            break;
        }
    }
    if (f == 1)
        printf("\nString Mismatched");
    else
        printf("\nString matched");
}