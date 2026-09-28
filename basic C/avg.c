#include <stdio.h>
void main()
{
    int a, b, c, avg;
    printf(" enter the 3 numbers= ");
    scanf("%d%d%d", &a, &b, &c);
    avg = (a + b + c) / 3;
    printf("the average is %d", avg);
    return 0;
}