#include <stdio.h>
#include <windows.h>
void main()
{
    FILE *fp;
    char nm[20], ch;
    printf("Enter the file Name=");
    scanf("%s", &nm);
    fp = fopen(nm, "a");//write
    if (fp == NULL)
        printf("Not Found");
    else
    {
        printf("Enter the Content=\n");
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
    printf("File reading\n");
    printf("please wait");
    Sleep(2000);
    printf("........");
    fp = fopen(nm, "r");//read
    for (ch = fgetc(fp); ch != EOF; ch = fgetc(fp))
    {
        if (ch == EOF)
            break;
        Sleep(2000);
        printf("%c", ch);
    }
    fclose(fp);
    remove("cow2.docx");
}