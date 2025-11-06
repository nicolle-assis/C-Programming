//Basic calculator
#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <stdlib.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    //variables
    int x, y, answer;
    float division, subtraction, multiplication, addition;
    system("cls");

    //Data input
    printf("Informe o valor de X: ");
    scanf("%d", &x);
    printf("Informe o valor de Y: ");
    scanf("%d", &y);

    printf("Equação\n");
    printf("[1] - Adição\n");
    printf("[2] - Subtração\n");
    printf("[3] - Multiplicação\n");
    printf("[4] - Divisão\n");
    printf("Selecione um equação: ");
    scanf("%d", &answer);

    //equation
    switch (answer)
    {
        case 1: 
            addition = x + y;
            printf("Soma: %.2f", addition);
        break;
        case 2:
            subtraction = x - y;
            printf("Subtração: %.2f", subtraction);
        break;
        case 3:
            multiplication = x * y;
            printf("MUltiplicação: %.2f", multiplication);
        break;
        case 4:
            division = x / y;
            printf("Divisão: %.2f", division);
        break;
        default:
            printf("error!código inválido");
    }
        
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}