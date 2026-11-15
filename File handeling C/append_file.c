#include <stdio.h>
#include <windows.h>
void main()
{
    FILE *fp;
    char nm[20], ch;
    printf("enter the file name= ");
    scanf("%s", &nm);
    fp = fopen(nm, "a"); // append
    if (fp == NULL)
    {
        printf("Cannot open file!!");
    }
    else
    {
        printf("enter the content= ");
        for (;;)
        {
            scanf("%c", &ch);
            if (ch == '#')
                break;
            else
                fputc(ch, fp);
        }
    }
    fclose(fp);
    printf("file reading\n");
    printf("Please wait");
    sleep(1);
    printf(".........");
    fp = fopen(nm, "r"); // read
    for (ch = fgetc(fp); ch != EOF; ch = fgetc(fp))
    {
        printf("%c", ch);
    }
    fclose(fp);
}