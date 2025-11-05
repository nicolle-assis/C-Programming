/*Problema 2
Elabore um programa que receba quatro notas e calcule a média aritmética entre elas*/

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
    float n1, n2, n3, n4, m;
    system("cls");

    /*entrada de dados*/
    printf("\tMÉDIA DE NOTAS");
    printf("\n------------------------------");
    printf("\nDigite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);
    printf("Digite a quarta nota: ");
    scanf("%f", &n4);

    
    /*calculo*/
    m = (n1+n2+n3+n4) /4;

    /*saida de dados*/
    printf("\n--------------------------------");
    printf("\nA média de notas foi: %.1f", m);

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}