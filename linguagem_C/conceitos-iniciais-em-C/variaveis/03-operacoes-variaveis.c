#include <stdio.h>

int main() {
    int a = 8, b = 3;

    printf("Soma: %d\n", a + b);
    printf("Subtração: %d\n", a - b);
    printf("Multiplicação: %d\n", a * b);
    printf("Divisão: %.2f\n", (float)a / b);
    printf("Resto da divisão: %d\n", a % b);

    return 0;
}
