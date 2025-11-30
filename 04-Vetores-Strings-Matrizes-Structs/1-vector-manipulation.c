#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int vectorA[20];
    int i;

    for(i = 0; i < 10; i++){
        printf("Digite o %d elemento do vetor: \n", i);
        scanf("%d", &vectorA[i]);
    }

    printf("Vetor preenchido\n");

    for(i = 0; i < 10; i++){
        printf("O elemento da posicao %d e: %d \n", i, vectorA[i]);
    }

    return 0;
}
