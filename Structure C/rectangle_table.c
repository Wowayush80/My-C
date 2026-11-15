#include <stdio.h>
struct box
{
    int len, bre, hei, vol;
};
struct box b[2];
void main()
{
    int i, n, a = 0, f = 0;
    printf("enter the number of rectangles= ");
    scanf("%d", &n);
    // input
    for (i = 0; i < n; i++)
    {
        printf("enter the length= ");
        scanf("%d", &b[i].len);
        printf("enter the breadth= ");
        scanf("%d", &b[i].bre);
        printf("enter the height= ");
        scanf("%d", &b[i].hei);
        b[i].vol = b[i].len * b[i].bre * b[i].hei;
    }
    // output
    printf("----------------------------------------\n");
    printf("Length\tBreadth\tHeight\tVolumn\n");
    printf("----------------------------------------\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t%d\t%d\t%d\n", b[i].len, b[i].bre, b[i].hei, b[i].vol);
    }
    for (i = 0; i < n; i++)
    {
        if (b[i].vol > a)
        {
            a = b[i].vol;
            f = i;
        }
    }
    printf("\n----rectangle with the hightest volume-------\n\n");
    printf("----------------------------------------\n");
    printf("Length\tBreadth\tHeight\tVolumn\n");
    printf("----------------------------------------\n");
    printf("%d\t%d\t%d\t%d\n", b[f].len, b[f].bre, b[f].hei, b[f].vol);
}