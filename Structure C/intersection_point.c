#include <stdio.h>
#include <stdlib.h>

struct line
{
    int m;
    int c;
};

struct point
{
    float x;
    float y;
};

int main(void)
{
    struct line l1, l2;
    struct point p;

    for (;;)
    {
        printf("\nEnter for 1st line:\n");
        printf("Enter the slope = ");
        scanf("%d", &l1.m);

        printf("Enter the Y-intercept = ");
        scanf("%d", &l1.c);

        printf("\nEnter for 2nd line:\n");
        printf("Enter the slope = ");
        scanf("%d", &l2.m);

        printf("Enter the Y-intercept = ");
        scanf("%d", &l2.c);

        if (l1.m == l2.m)
        {
            printf("\nPoint of intersection can't be obtained\n");
            exit(0);
        }
        else
        {
            p.x = (l2.c - l1.c) / (l1.m - l2.m);

            p.y = (l1.m * l2.c - l2.m * l1.c) / (l1.m - l2.m);
        }

        printf("\nPoint of intersection = (%.3f, %.3f)\n",
               p.x, p.y);
    }
}