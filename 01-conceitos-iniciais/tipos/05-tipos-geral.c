#include <stdio.h>
#include <stdbool.h>

int main() {
    int idade = 20;
    float altura = 1.65;
    char inicial = 'N';
    bool estudante = true;

    printf("Resumo de tipos básicos:\n");
    printf("Idade (int): %d\n", idade);
    printf("Altura (float): %.2f\n", altura);
    printf("Inicial (char): %c\n", inicial);
    printf("Estudante (bool): %d\n", estudante);

    printf("\nTamanhos na memória (bytes):\n");
    printf("int: %zu\n", sizeof(idade));
    printf("float: %zu\n", sizeof(altura));
    printf("char: %zu\n", sizeof(inicial));
    printf("bool: %zu\n", sizeof(estudante));

    return 0;
}
