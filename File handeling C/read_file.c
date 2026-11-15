#include <stdio.h>
#include <windows.h>
void main()
{
    FILE *fp;
    char nm[20], ch;
    printf("enter the file name= ");
    scanf("%s", nm);
    fp = fopen(nm, "r");
    if (fp == NULL)
        printf("file cannot be opened!!!!");
    else
    {
        for (ch = fgetc(fp); ch != EOF; ch = fgetc(fp))
        {
            printf("%c", ch);
            sleep(1);
        }
    }
    fclose(fp);
}