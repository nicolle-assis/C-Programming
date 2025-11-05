#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <windows.h>
#include <stdlib.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    /* declaração de variáveis */
    double r, a, p;

    /* limpar tela */
    system("cls");

    /* entrada de dados */
    printf("Informe o raio de um círculo: ");
    scanf("%lf", &r);

    /* cálculo */
    a = M_PI * pow(r, 2);
    p = 2 * M_PI * r;

    /* saída de dados */
    printf("\n===================");
    printf("\nÁrea de %.2lf = %.2lf", r, a);
    printf("\nPerímetro de %.2lf = %.2lf", r, p);
    printf("\n====================\n");

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}
