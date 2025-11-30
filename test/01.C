#include <stdio.h>
#include <stdlib.h>
#include <string.h> //para comparar strings usamos a função strcmp da biblioteca <string.h>

int main()
{
    system("cls");

    char vetorA[10][20], busca[20];
    int i, acha;

    for(i=0;i<10;i++){
        printf("Digite uma palavra para por no %do elemento: ", i);
        scanf("%s", vetorA[i]);
    }
   
    printf("\nInforme a palavra que deseja buscar: ");
    scanf("%s", busca);

    i = 0;
    acha = 0;

    while ((acha == 0) && (i<10)){
        if (strcmp(vetorA[i], busca) == 0){ //== só serve para números, para palavras use strcmp
            acha = 1;
        }
        else i++;
    }

    if (acha == 1){
        printf("\nA palavra %s foi encontrada na posicao %d.", busca, i);
    }
    else 
        printf("\nA palavra nao foi encontrada.");

    return 0;
}