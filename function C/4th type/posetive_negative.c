#include <stdio.h>
int check(int);
int main()
{
    int a, r;

    printf("Enter the number = ");
    scanf("%d", &a);

    r = check(a);

    if (r == 1)
        printf("%d is a positive number", a);
    else if (r == 0)
        printf("%d is a neutral number", a);
    else
        printf("%d is a negative number", a);

    return 0;
}

int check(int a)
{
    if (a > 0)
        return 1;
    else if (a == 0)
        return 0;
    else
        return -1;
}