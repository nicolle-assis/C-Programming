/*programa que ler um número positivo inteiro e apresente o quadrado
e a raiz quadrada deste número.*/

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
    int x;
    double qd, rd;

    /*limpar tela*/
    system("cls");

    /*entrada de dados*/
    printf("Informe o valor de X: ");
    scanf("%i", &x);

    /*calculo*/
    qd = x * x;
    rd = sqrt(x);

    /*saida de dados*/
    printf("\n==============================");
    printf("\nQuadrado de %i = %.1lf", x, qd);
    printf("\nRaiz Quadrada de %i = %.1lf", x, rd);
    printf("\n==============================");

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}