#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // para SetConsoleOutputCP

int main() {
    SetConsoleOutputCP(65001); // força UTF-8 no console

    printf("Olá, Mundo!\n");

    return 0;
}
