#include <stdio.h>
void odd(int);
void main()
{
    int x;
    printf("Enter the range = ");
    scanf("%d", &x);
    odd(x); // calling
    // calling
}
void odd(int n)
{
    int i, a = 0, b = 1, c;
    for (i = 2; i <= n; i = i + 3)
    {
        printf("%d ", i);
    }
}