#include <stdio.h>
int check(int);
int main()
{
    int a, r;

    printf("Enter the number = ");
    scanf("%d", &a);

    r = check(a);

    if (r == 1)
        printf("%d is a even number", a);
    else
        printf("%d is a odd number", a);
    return 0;
}

int check(int a)
{
    if (a % 2 == 0)
        return 1;
    else 
        return 0;
}