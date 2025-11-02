//Simple calculator
#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <stdlib.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    //variable
    int x, y, equation;
    float addition, subtraction, multiplication, division;
    system("cls");

    //Dara input
    printf("Informe o valor de X: ");
    scanf("%d", &x);
    printf("Informe o valor de Y: ");
    scanf("%d", &y);
    printf("Equação: \n[1] - Soma \n[2] - Subtração \n[3] - Multiplicação \n[4] - Divisão");
    printf("\nEscolha a equação: ");
    scanf("%d", &equation);

    //Calculation
    if(equation==1)
    {
        addition = x + y;
        printf("Soma : %.2f", addition);
    }
    else if(equation==2)
    {
        subtraction = x - y;
        printf("Subtração: %.2f", subtraction);
    }
    else if(equation==3)
    {
        multiplication = x * y;
        printf("Multiplicação: %.2f", multiplication);
    }
    else if(equation==4)
    {
        division = x / y;
        printf("Divisão: %.2f", division);
    }
    else
    {
        printf("error!digito invalido");
    }
  
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}
