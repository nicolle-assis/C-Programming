#include <stdio.h>

int main() {
    char letra = 'A';
    char simbolo = '#';
    char numero_char = '7';

    printf("Tipo char em C:\n");
    printf("Letra: %c\n", letra);
    printf("Símbolo: %c\n", simbolo);
    printf("Número (como caractere): %c\n", numero_char);

    printf("\nValor ASCII de cada caractere:\n");
    printf("'%c' = %d\n", letra, letra);
    printf("'%c' = %d\n", simbolo, simbolo);
    printf("'%c' = %d\n", numero_char, numero_char);

    return 0;
}
