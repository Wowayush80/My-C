// operator 4th type
#include <stdio.h>
int add(int, int);
int sub(int, int);
int multi(int, int);
int divi(int, int);
void main()
{
    char x;
    int a, b;
    printf("Enter the Choice =  ");
    scanf("%c", &x);
    printf("Enter 2 No. =  ");
    scanf("%d%d", &a, &b);
    switch (x)
    {
    case '+':
        printf("Add = %d ", add(a, b));
        break;
    case '-':
        printf("Subtract = %d ", sub(a, b));
        break;
    case '*':
        printf("Multiply = %d ", multi(a, b));
        break;
    case '/':
        printf("Division = %d ", divi(a, b));
        break;
    }
}
int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int multi(int a, int b)
{
    return a * b;
}
int divi(int a, int b)
{
    return a / b;
}