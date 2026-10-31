#include <stdio.h>
void mul(int);
void main()
{
    int x;
    printf("Enter the number = ");
    scanf("%d", &x);
    mul(x); // calling
    // calling
}
void mul(int n)
{
    int i, a = 0, b = 1, c;
    for (i = 1; i <= 10; i++)
    {
        c = i * n;
        printf(" %d X %d = %d \n", n, i, c);
    }
}