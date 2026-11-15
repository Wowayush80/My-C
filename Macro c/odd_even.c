#include <stdio.h>
#define p printf
#define s scanf
#define check(x) (x == 0) ? printf("zero") : (x % 2 == 0) ? printf("even") \
                                                          : printf("odd");
void main()
{
    int x;
    p("enter the  number= ");
    s("%d", &x);
    check(x);
}