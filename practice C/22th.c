#include <stdio.h>
void main()
{
    int x;
    printf("enter the  number= ");
    scanf("%d", &x);
    (x % 7 == 0 && x % 10 == 7) ? printf("its a buzz number") : (x % 7 == 0 && x % 100 == 7) ? printf("its a buzz number")
                                                                                             : printf("it is not a buzz number");
}