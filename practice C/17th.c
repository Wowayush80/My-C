#include <stdio.h>
void main()
{
    int x;
    printf("enter the number= ");
    scanf("%d", &x);
    switch (x == 0)
    {
    case 1:
        printf("its nutral number");
        break;
    case 0:
    {
        switch (x % 2 == 0)
        {
        case 1:
            printf("it is even number!!!");
            break;
        case 0:
            printf(" its a odd number!!!");
            break;
        }
    }
    }
}