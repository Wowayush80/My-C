#include <stdio.h>
void main()
{
    int x, y, z;
    printf("Enter the 3 No. = ");
    scanf("%d%d%d", &x, &y, &z);
    if (x > y && y == z)
        printf("1st No. is greatest & 2nd ,3rd are Equal");
    else if (x < y && y == z)
        printf("1st No. is Smallest & 2nd ,3rd are Equal");
    if (y > x && x == z)
        printf("2nd No. is greatest & 1st ,3rd are Equal");
    if (y < x && x == z)
        printf("1st No. is smallest & 1st ,3rd are Equal");
    if (z > x & y == x)
        printf("3rd No. is greatest & 1st ,2nd are Equal");
    if (z < x && y == x)
        printf("1st No. is greatest & 1st ,2nd are Equal");
    else if (x > y && x > z)
        printf("1st No. %d is Greatest", x);
    else if (y > z)
        printf("2nd No. %d is Greatest", y);
    else if (x == y && y == z)
        printf("All are Equal");
    else
        printf("3rd No. %d is Greatest", z);
}