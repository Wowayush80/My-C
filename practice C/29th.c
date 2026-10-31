#include <stdio.h>
struct emp
{
    int id, sala;
    char nm[20];
};
void main()
{
    int i, n;
    printf("enter the number of employees = ");
    scanf("%d", &n);
    struct emp e[n];

    for (i = 0; i < n; i++)
    {
        printf("enter the employee id= ");
        scanf("%d", &e[i].id);
        printf("enter the employee name= ");
        scanf("%s", &e[i].nm);
        printf("enter the employee monthly salary= ");
        scanf("%d", &e[i].sala);
    }
    printf("-----------------------------------------------------\n");
    printf("ID\t EMPLOYEE NAME\t MONTHLY SALARY\t ANUAL SALARY\n");
    printf("-----------------------------------------------------\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t\t%s\t%d\t%d\n", e[i].id, e[i].nm, e[i].sala, (e[i].sala + 12));
    }
    int pos, j, a;
    for (i = 0; i < (n - 1); i++)
    {
        pos = i;
        for (j = (0 + 1); j < n; j++)
        {
            if (e[pos].sala > e[j].sala)
                pos = j;
        }
        a = e[i].sala;
        e[i].sala = e[pos].sala;
        e[pos].sala = a;
    }
    printf("-----------------------------------------------------\n");
    printf("ID\t EMPLOYEE NAME\t MONTHLY SALARY\t ANUAL SALARY\n");
    printf("-----------------------------------------------------\n");
    for (j = 0; j < n; j++)
    {
        printf("%d\t\t%s\t%d\t%d\n", e[j].id, e[j].nm, e[j].sala, (e[j].sala + 12));
    }
}