#include <stdio.h>
#include <string.h>
struct employee
{
    int id, sala, da, ta, hra, gross, pf, net;
    char nm[30], des[30];
};
struct employee b[10];
void main()
{
    int i, n;
    printf("enter the number of employees= ");
    scanf("%d", &n);
    // input
    for (i = 0; i < n; i++)
    {
        printf("enter the employee id= ");
        scanf("%d", &b[i].id);
        printf("enter the name= ");
        scanf("%s", &b[i].nm);
        printf("enter the salary= ");
        scanf("%d", &b[i].sala);
        b[i].da = (b[i].sala * 10) / 100;
        b[i].ta = (b[i].sala * 15) / 100;
        b[i].hra = (b[i].sala * 20) / 100;
        b[i].gross = b[i].da + b[i].ta + b[i].hra + b[i].sala;
        b[i].pf = (b[i].gross * 20) / 100;
        b[i].net = b[i].gross - b[i].pf;
        if (b[i].gross >= 0 && b[i].gross <= 10000)
            strcpy(b[i].des, "PEON");
        else if (b[i].gross > 10000 && b[i].gross <= 20000)
            strcpy(b[i].des, "CLERK");
        else if (b[i].gross > 20000 && b[i].gross <= 50000)
            strcpy(b[i].des, "EXECUTIVE");
        else
            strcpy(b[i].des, "BRANCH MANAGER");
    }
    // output
    printf("\n-----------------------------------------------------------------------------------------------------------\n");
    printf("Employee id\tName\tsalary\tDA\tTA\tHRA\tGross salary\tPF\tNet salary\tDesignation\n");
    printf("-----------------------------------------------------------------------------------------------------------\n");
    for (i = 0; i < n; i++)
    {
        printf("%d \t\t %s\t %d\t %d\t %d\t %d\t %d\t\t %d\t %d\t\t %s\n", b[i].id, b[i].nm, b[i].sala, b[i].da, b[i].ta, b[i].hra, b[i].gross, b[i].pf, b[i].net, b[i].des);
    }
    printf("\n\n-----SORTING OF EMPLOYEE ACCORDING TO THEIR SALARY (asending order)------");
    int pos, j, lok;
    for (i = 0; i < (n - 1); i++) // sorting
    {
        pos = i;
        for (j = (i + 1); j < n; j++)
        {
            if (b[pos].sala > b[j].sala)
                pos = j;
        }
        lok = b[i].sala;
        b[i].sala = b[pos].sala;
        b[pos].sala = lok;
    }
    printf("-----------------------------------------------------------------------------------------------------------\n");
    printf("Employee id\tName\tsalary\tDA\tTA\tHRA\tGross salary\tPF\tNet salary\tDesignation\n");
    printf("-----------------------------------------------------------------------------------------------------------\n");
    for (i = 0; i < n; i++)
    {
        printf("%d \t\t %s\t %d\t %d\t %d\t %d\t %d\t\t %d\t %d\t\t %s\n", b[i].id, b[i].nm, b[i].sala, b[i].da, b[i].ta, b[i].hra, b[i].gross, b[i].pf, b[i].net, b[i].des);
    }
}