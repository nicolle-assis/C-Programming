//Exponentiation-Program
#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <stdlib.h>

int main()
{
    SetConsoleOutputCP(65001);

    //variables
    int base, exponent, sum;
    double powerResult;
    system("cls");

    //data input
    printf("\nInforme o valor da base: ");
    scanf("%i", &base);
    printf("Informe o valor do expoente: ");
    scanf("%i", &exponent);

    //calculation
    sum = base + exponent;
    powerResult = pow(base, exponent);

    //data output
    printf("\n==============================");
    printf("\nSoma total dos números: %i", sum);
    printf("\nResultado da exponenciação: %.0lf", powerResult);
    printf("\n==============================");

    return 0;
}
