#include <stdio.h>
int main()
{
    int a;
    printf("ENter = ");
    scanf("%d", &a);
    if (!a)
    {
        printf("NO = %d", a);
        printf("\nTrue");
    }
    else
        printf("False");
}