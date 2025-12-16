#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(65001);
    system("cls");

    int vectorA[20];
    int i;

    for(i = 0; i < 10; i++){
        printf("Digite o %dº elemento do vetor: ", i+1);
        scanf("%d", &vectorA[i]);
    }

    printf("\nVetor preenchido\n");

    for(i = 0; i < 10; i++){
        printf("O elemento da posição %d e: %d \n", i, vectorA[i]);
    }

    return 0;
}
