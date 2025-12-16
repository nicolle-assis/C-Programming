#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(65001);
    system("cls");

    int numbers[10];
    int i;

    for (i=0;i<10;i++){
        printf("Informe um número: ");
        scanf("%d", &numbers[i]);
    }

    for (i=0;i<10;i++){
        printf("Valor inserido: %d\n", numbers[i]);
    }
    return 0;
}