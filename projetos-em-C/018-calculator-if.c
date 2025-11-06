/* Basic calculator using if statements */
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    //variables
    float num1, num2, result;
    int operation;
    system("cls");

    /* Data input */
    printf("Informe o primeiro número: ");
    scanf("%f", &num1);

    printf("Informe o segundo númeror: ");
    scanf("%f", &num2);

    printf("\nEscolha uma operação:\n");
    printf("1 - Soma\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n");
    printf("Opção: ");
    scanf("%i", &operation);

    /* Conditional structure */
    if (operation == 1)
    {
        result = num1 + num2;
        printf("\nSoma: %.3f\n", result);
    }
    else if (operation == 2)
    {
        result = num1 - num2;
        printf("\nSubtração: %.3f\n", result);
    }
    else if (operation == 3)
    {
        result = num1 * num2;
        printf("\nSubtração: %.3f\n", result);
    }
    else if (operation == 4)
    {
        if (num2 != 0)
        {
            result = num1 / num2;
            printf("\nDivisão: %.3f\n", result);
        }
        else
        {
            printf("\nerror!divisão por zero não é permitida!\n");
        }
    }
    else
    {
        printf("\nerror!Opção inválida! Tente novamente.\n");
    }

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}
