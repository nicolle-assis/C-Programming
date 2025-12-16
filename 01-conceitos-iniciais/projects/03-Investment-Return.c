//Investment-Return
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
int main()
{
    SetConsoleOutputCP(65001);

    //variables
    double depositValue, interestRate, yieldValue, totalAmount;
    system("cls");

    //data input
    printf("\nQuanto você vai depositar? R$");
    scanf("%lf", &depositValue);
    printf("Informe a taxa de juros? ");
    scanf("%lf", &interestRate);

    //calculation
    yieldValue = depositValue * (interestRate/100);
    totalAmount = depositValue + yieldValue;

    //data output
    printf("\nValor do rendimento: R$ %.2lf", yieldValue);
    printf("\nValor total: R$ %.2lf", totalAmount);

    return 0;
}