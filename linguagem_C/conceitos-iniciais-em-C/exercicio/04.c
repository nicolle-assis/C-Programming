/*Problema 4
Escreva um programa que receba dois números, calcule e apresente o resultado
do primeiro número elevado ao segundo.*/

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
    int n1, n2, s;
    double ex, pow();
    system("cls");

    /*entrada de dados*/
    printf("\nInforme o valor do primeiro número: ");
    scanf("%i", &n1);
    printf("Informe o valor do segundo número: ");
    scanf("%i", &n2);

    /*calculo*/
    s = n1 + n2;
    ex = pow(n1, n2);

    /*saida de dados*/
    printf("\nSoma total dos números: %i", s);
    printf("\nResultado da exponenciação: %.0lf", ex);

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}