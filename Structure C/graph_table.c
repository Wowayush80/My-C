#include <stdio.h>
struct point
{
    int x, y;
};
void main()
{
    int n, i;
    printf("enter the number of points= ");
    scanf("%d", &n);
    struct point p[n];
    for (i = 0; i < n; i++)
    {
        printf("enter the cordinates of x= ");
        scanf("%d", &p[i].x);
        printf("enter the cordinates of y= ");
        scanf("%d", &p[i].y);
    }
    printf("---------------------------------------\n");
    printf("\tX\tY\t\n");
    printf("----------------------------------------\n");
    for (i = 0; i < n; i++)
    {
        printf("\t%d\t%d\t\n", p[i].x, p[i].y);
    }
    for (i = 0; i < n; i++)
    {
        if (p[i].x < 0 && p[i].y > 0)
            printf(" %d & %d is situated in the second cordinates\n", p[i].x, p[i].y);
        else if (p[i].x > 0 && p[i].y < 0)
            printf(" %d & %d is situated in the fourth cordinates\n", p[i].x, p[i].y);
    }
}