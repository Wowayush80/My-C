// operator 4th type
#include <stdio.h>
int day();
void main()
{
    int x;
    printf("Enter the day =  ");
    scanf("%c", &x);
    day(x);
}
int day(int x)
{
    switch (x)
    {
    case 1:
        printf("sunday");
        break;
    case 2:
        printf("monday");
        break;
    case 3:
        printf("tuesday");
        break;
    case 4:
        printf("wednesday");
        break;
    case 5:
        printf("thursday");
        break;
    case 6:
        printf("friday");
        break;
    case 7:
        printf("saturday");
        break;
    default:
        printf("Wrong choice!!!!");
    }
}