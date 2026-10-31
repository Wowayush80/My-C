#include <stdio.h>
void main()
{
    int x;
    printf("enter the year= ");
    scanf("%d", &x);
    switch (x % 4 == 0 && x % 100 != 0)
    {
    case 1:
        printf("its a leap year");
        break;
    case 0:
    {
        switch (x % 400 == 0)
        {
        case 1:
            printf("its a leap year");
            break;
        case 0:
            printf("its not a leap year");
            break;
        }
    }
    }
}