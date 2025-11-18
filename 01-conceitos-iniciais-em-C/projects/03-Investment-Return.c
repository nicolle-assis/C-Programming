//Investment-Return
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

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}