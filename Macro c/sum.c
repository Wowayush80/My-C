#include <stdio.h>
#define add(x, y) printf("Addition = %d", x + y)
#define p printf
#define sc scanf
void main()
{
    int a, b;
    p("Enter 2 No. = ");
    sc("%d%d", &a, &b);
    add(a, b); 
}