#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int numbers[10];
    int i;

    for (i=0;i<10;i++){
        printf("Informe um numero: ");
        scanf("%d", &numbers[i]);
    }

    for (i=0;i<10;i++){
        printf("Valor inserido: %d\n", numbers[i]);
    }
    return 0;
}