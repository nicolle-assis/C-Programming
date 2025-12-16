#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>

#define N 20

int main()
{
    system("cls");
    SetConsoleOutputCP(65001);

    char origem[N] = {"Olá, Mundo!"};
    char destino[N];

    printf("Antes do strcpy: \n");
    puts(origem);
    puts(destino);

    strcpy(destino, origem);

    printf("\nDepois do strcpy: \n");
    puts(origem);
    puts(destino);

    return 0;
}