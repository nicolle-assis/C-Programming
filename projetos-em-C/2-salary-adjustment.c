/* Salary Adjustment Program
   Reads a job code and current salary, calculates the new salary based on the role's increase. */

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int main()
{
    SetConsoleOutputCP(65001);

    /* Variable declaration */
    int jobCode;
    float currentSalary, newSalary;
    system("cls");

    /* Display job table */
    printf("\n\tTABELA DE CARGOS");
    printf("\n-----------------------------------");
    printf("\n[1] - Servente 40%%");
    printf("\n[2] - Pedreiro 35%%");
    printf("\n[3] - Mestre de Obras 20%%");
    printf("\n[4] - Técnico de Segurança 10%%");
    printf("\nConsultar código: ");
    scanf("%d", &jobCode);

    /* Calculate new salary based on job code */
    if (jobCode >= 1 && jobCode <= 4)
    {
        printf("\nSalário atual: R$");
        scanf("%f", &currentSalary);

        if (jobCode == 1)
            newSalary = currentSalary * 1.4;
        else if (jobCode == 2)
            newSalary = currentSalary * 1.35;
        else if (jobCode == 3)
            newSalary = currentSalary * 1.2;
        else if (jobCode == 4)
            newSalary = currentSalary * 1.1;

        /* Output new salary */
        printf("Novo salário: R$ %.2f", newSalary);
    }
    else
    {
        printf("Erro! Código inválido!");
    }

    return 0;
}
