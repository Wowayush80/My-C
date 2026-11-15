#include <stdio.h>
#include <windows.h>
void main()
{
    FILE *fp;
    char nm[20], ch, c, l[200000];
    int k;
    printf("enter r for only read or enter w for write\n");
    printf("enter the choice= ");
    scanf("%c", &c);
    switch (c)
    {
    case 'w':
        printf("enter the file name= ");
        scanf("%s", &nm);
        fp = fopen(nm, "a"); // append
        if (fp == NULL)
        {
            printf("Cannot open file!!");
        }
        else
        {
            printf("enter the content(enter # to save)= ");
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
        break;
    case 'r':
        printf("enter the file name= ");
        scanf("%s", nm);
        fp = fopen(nm, "r");
        if (fp == NULL)
            printf("file cannot be opened!!!!");
        else
        {
            printf("enter the number of letter to be print at one time= ");
            scanf("%d", &k);
            for (; fgets(l, (k + 1), fp) != '\0';)
            {
                printf("%s", l);
                sleep(1);
            }
        }
        fclose(fp);
        break;
    default:
        printf("Wrong choice!!!! ");
    }
}