#include <stdio.h>
void main()
{
    int a;
    printf("enter the number= ");
    scanf("%d", &a);
    if (a == 0)
        printf("%d is a nutral number", a);
    else if ((a * a) % 10 == a || (a * a) % 100 == a)
        printf("%d is a autopolymorphic number", a);
    else
        printf("%d is not a autopolymorphic number", a);
    return 0;
}