/*Problema 3
Faça um programa que receba o valor de um depósito e o valor da taxa de juros, calcule e
apresente o valor do rendimento e o valor total (valor do depósito + valor do rendimento).*/

#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <stdlib.h>
int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    /*declaracao de variaveis*/
    double vd, vt, vr, tt;
    system("cls");

    /*entrada de dados*/
    printf("\nQuanto você vai depositar? R$");
    scanf("%lf", &vd);
    printf("Informe a taxa de juros? ");
    scanf("%lf", &vt);

    /*calculo*/
    vr = vd * (vt/100);
    tt = vd+vr;

    /*saida de dados*/
    printf("\nValor do rendimento: R$ %.2lf", vr);
    printf("\nValor total: R$ %.2lf", tt);

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}