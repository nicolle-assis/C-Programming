/* Basic Calculator Program
   Performs addition, subtraction, multiplication, or division based on user choice. */

#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    /* Variable declaration */
    int x, y, choice;
    float result;
    system("cls");

    /* Data input */
    printf("Informe o valor de X: ");
    scanf("%d", &x);
    printf("Informe o valor de Y: ");
    scanf("%d", &y);

    printf("\nEquação\n");
    printf("[1] - Adição\n");
    printf("[2] - Subtração\n");
    printf("[3] - Multiplicação\n");
    printf("[4] - Divisão\n");
    printf("Selecione uma equação: ");
    scanf("%d", &choice);

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

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}
