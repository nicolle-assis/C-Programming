#include <stdio.h>
#include <stdlib.h>

int main() {

    double x; // Declaração de uma variável do tipo double (números com casas decimais)
    system("cls");

    x = 2.34567;// Atribuição de um valor decimal à variável

    // Impressão do valor de x no console com 2 casas decimais
    // "%.2lf" → .2 indica 2 casas decimais, lf indica que é um double
    printf("%.2lf\n", x);

return 0;
}