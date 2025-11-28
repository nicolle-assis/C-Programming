#include <stdio.h>
#include <stdbool.h>

int main() {
    bool ligado = true;
    bool desligado = false;

    printf("Tipo lógico (bool) em C:\n");
    printf("ligado = %d\n", ligado);
    printf("desligado = %d\n", desligado);

    if (ligado)
        printf("\nA variável 'ligado' é verdadeira!\n");

    return 0;
}
