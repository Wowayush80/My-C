#include <stdio.h>
void main()
{
    char x;
    printf("enter the charecter= ");
    scanf("%c", &x);
    if (x >= 65 && x <= 90)
        printf("%c", x + 32);
    else if (x >= 97 && x <= 122)
        printf("%c", x - 32);
    else
        printf("%c", x);
    return 0;
}