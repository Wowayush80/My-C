#include <stdio.h>
char large(char);
char small(char);

int main()
{
    char x, r;

    printf("Enter the character = ");
    scanf("%c", &x);

    if (x >= 'A' && x <= 'Z')
        r = small(x);
    else if (x >= 'a' && x <= 'z')
        r = large(x);
    else
        r = x;

    printf("Changed character = %c", r);

    return 0;
}

char small(char x)
{
    return x + 32;
}

char large(char x)
{
    return x - 32;
}