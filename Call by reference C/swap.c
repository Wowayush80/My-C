#include <stdio.h>
#define p printf
#define s scanf
swap(int *, int *);
void main()
{
    int x, y;
    p("enter the 2 number= ");
    s("%d %d", &x, &y);
    swap(&x, &y);
}
swap(int *a, int *b)
{
    int po;
    po = *a;
    *a = *b;
    *b = po;
    printf("x=%d y=%d", *a, *b);
}