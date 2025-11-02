

#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <windows.h>
#include <stdlib.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    /*declaracao de variaveis*/
    int r;
    double a, p;

    /*limpar tela*/
    system("cls");

    /*entrada de dados*/
    printf("Informe o raio de um círculo: ");
    scanf("%i", &r);

    /*calculo*/
    a = M_PI * pow(r, 2);
    p = 2 * M_PI * r;

    /*saida de dados*/
    printf("\n===================");
    printf("\nÁrea de %i = %.2lf", r, a);
    printf("\nPerimetro de %i = %.2lf", r, p);
    printf("\n====================");

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}