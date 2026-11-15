// operator 4th type
#include <stdio.h>
char sun(char);
char mon(char);
char tus(char);
char wed(char);
char thu(char);
char fri(char);
char sat(char);
void main()
{
    int x;
    printf("Enter the day number =  ");
    scanf("%s", &x);
    switch (x)
    {
    case '1':
        printf("Day is= %s ", sun(x));
        break;
    case '2':
        printf("Day is= %s ", mon(x));
        break;
    case '3':
        printf("Day is= %s ", tus(x));
        break;
    case '4':
        printf("Day is= %s ", wed(x));
        break;
    case '5':
        printf("Day is= %s ", thu(x));
        break;
    case '6':
        printf("Day is= %s ", fri(x));
        break;
    case '7':
        printf("Day is= %s ", sat(x));
        break;
    }
}
char sun(char x)
{
    return "Sunday";
}
char mon(char x)
{
    return "monday";
}
char tue(char x)
{
    return "tuesday";
}
char wed(char x)
{
    return "tuesday";
}
char thu(char x)
{
    return "tuesday";
}
char fri(char x)
{
    return "tuesday";
}
char sat(char x)
{
    return "tuesday";
}
