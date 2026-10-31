// WAP to print fibonacci series  by using func. 2nd type
#include <stdio.h>
void fibo(int);
void main()
{
    int x;
    printf("Enter the range = ");
    scanf("%d", &x);
    fibo(x); // calling
    // fibo(15);//calling
}
void fibo(int n)
{
    int i, a = 0, b = 1, c;
    printf("%d %d ", a, b);
    for (i = 1; i <= n - 2; i++)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
}