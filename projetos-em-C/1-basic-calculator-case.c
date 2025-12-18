#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
    int choice;
    double result;
} Operation;

int main() {
    Operation op;
    char answer;

    const char *operations[] = {"Adicao", "Subtracao", "Multiplicacao", "Divisao"};

    do {
        printf("\n=== Calculadora Basica ===\n");
        printf("[1] - Adicao\n");
        printf("[2] - Subtracao\n");
        printf("[3] - Multiplicacao\n");
        printf("[4] - Divisao\n");
        printf("Selecione uma opcao: ");
        scanf("%d", &op.choice);

        printf("\nInforme o valor de X: ");
        scanf("%d", &op.x);
        printf("Informe o valor de Y: ");
        scanf("%d", &op.y);

        switch (op.choice) {
            case 1:
                op.result = op.x + op.y;
                printf("%s: %.2f\n", operations[op.choice - 1], op.result);
                break;
            case 2:
                op.result = op.x - op.y;
                printf("%s: %.2f\n", operations[op.choice - 1], op.result);
                break;
            case 3:
                op.result = op.x * op.y;
                printf("%s: %.2f\n", operations[op.choice - 1], op.result);
                break;
            case 4:
                if (op.y == 0) {
                    printf("Erro! Divisao por zero.\n");
                } else {
                    op.result = (double)op.x / op.y;
                    printf("%s: %.2f\n", operations[op.choice - 1], op.result);
                }
                break;
            default:
                printf("Erro! Codigo invalido.\n");
                break;
        }

        printf("\nQuer fazer uma nova equacao? [s/n]: ");
        scanf(" %c", &answer);

    } while (answer == 's' || answer == 'S');

    return 0;
}