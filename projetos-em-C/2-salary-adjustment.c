#include <stdio.h>
#include <stdlib.h>

#define JOBS 4

typedef struct {
    int code;
    char name[30];
    float increase; // percentual de aumento (ex.: 0.40 = 40%)
} Job;

int main() {
    Job jobTable[JOBS] = {
        {1, "Servente", 0.40},
        {2, "Pedreiro", 0.35},
        {3, "Mestre de Obras", 0.20},
        {4, "Tecnico de Seguranca", 0.10}
    };

    int jobCode;
    float currentSalary, newSalary;

    printf("\n\tTABELA DE CARGOS");
    printf("\n-----------------------------------");
    for (int i = 0; i < JOBS; i++) {
        printf("\n[%d] - %s %.0f%%", jobTable[i].code, jobTable[i].name, jobTable[i].increase * 100);
    }

    printf("\nConsultar codigo: ");
    scanf("%d", &jobCode);

    // procurar o cargo na tabela
    int found = 0;
    for (int i = 0; i < JOBS; i++) {
        if (jobTable[i].code == jobCode) {
            found = 1;
            printf("\nSalario atual: R$ ");
            scanf("%f", &currentSalary);

            newSalary = currentSalary * (1 + jobTable[i].increase);
            printf("Novo salario (%s): R$ %.2f\n", jobTable[i].name, newSalary);
            break;
        }
    }

    if (!found) {
        printf("Erro! Codigo invalido!\n");
    }

    return 0;
}