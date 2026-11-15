#include <stdio.h>
void main(int argc, char *argv[])
{
    int x, y, z;
    if (argc == 3)
    {
        x = atoi(argv[1]);
        y = atoi(argv[2]);
        z = x + y;
        printf("\nResult = %d", z);
    }
    else
        printf("\nIncorrect argument number!");
}