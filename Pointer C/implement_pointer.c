#include <stdio.h>
void main()
{
    char x = 'A', *p;
    p = &x; // p is a pointer type variable which can store the address of a variable viz.x
    printf("value of x= %c\n", x);
    printf("value of x= %c\n", *p);   //*p --> value at p   (value at 100)-->15
    printf("address of x= %u\n", &x); //%u --> unsigned integer
    printf("address of x= %u\n", p);
    printf("address of p= %u\n", &p);
}