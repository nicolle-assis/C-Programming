/* Basic Calculator Program
   Performs addition, subtraction, multiplication, or division based on user choice. */

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int main()
{
    SetConsoleOutputCP(65001);

    /* Variable declaration */
    int x, y, choice;
    float result;
    char answer;

    do{
        system("cls");
        printf("\nEquação\n");
        printf("[1] - Adição\n");
        printf("[2] - Subtração\n");
        printf("[3] - Multiplicação\n");
        printf("[4] - Divisão\n");
        printf("Selecione uma equação: ");
        scanf("%d", &choice);

        /* Data input */
        printf("\nInforme o valor de X: ");
        scanf("%d", &x);
        printf("Informe o valor de Y: ");
        scanf("%d", &y);

        /* Perform calculation based on user choice */
        switch (choice)
        {
            case 1: 
                result = x + y;
                printf("Soma: %.2f", result);
                break;
            case 2:
                result = x - y;
                printf("Subtração: %.2f", result);
                break;
            case 3:
                result = x * y;
                printf("Multiplicação: %.2f", result);
                break;
            case 4:
                if (y != 0)  // Avoid division by zero
                {
                    result = (float)x / y;
                    printf("Divisão: %.2f", result);
                }
                else
                {
                    printf("Erro! Divisão por zero.");
                }
                break;
            default:
                printf("Erro! Código inválido.");
                break;
        }
        printf("\nQuer fazer uma nova equação? [s/n]: ");
        scanf(" %c", &answer);
    } while  (answer == 's');

    return 0;
}
