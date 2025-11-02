/*Problema 5
Elabore um programa que calcule a área de um trapézio.*/

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
    float at, bM, bm, h;
    system("cls");

    /*entrada de dados*/
    printf("\nInforme a Base Maior do trapézio (cm): ");
    scanf("%fl", &bM);
    printf("Informe a Base Menor do trapézio (cm): ");
    scanf("%fl", &bm);
    printf("Informe a altura do trapézio (cm): ");
    scanf("%fl", &h);

    /*calculo*/
    at = (bM + bm) * h / 2;

    /*saida de dados*/
    printf("\nBase maior: B = %.1f cm", bM);
    printf("\nBase menor: b = %.1f cm", bm);
    printf("\nAltura: h = %.1f cm", h);
    printf("\nÁrea do trapézio: %.1f cm", at);

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}
