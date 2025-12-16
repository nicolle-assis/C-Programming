//Vector Word Search

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

int main() 
{
    SetConsoleOutputCP(65001);
    system("cls");

    //variables
    char vetorA[10][20];  // 10 palavras, até 19 letras
    char busca[20];
    int i, acha;

    //dataInput
    for(i = 0; i < 10; i++) {
        printf("Digite uma palavra para por no %dº elemento: ", i);
        scanf("%19s", vetorA[i]); //%19s garante que não ultrapasse o limite de 19 caracteres.
    }

    //search
    printf("Informe a palavra que deseja buscar: ");
    scanf("%19s", busca);

    i = 0;
    acha = 0;

    while ((acha == 0) && (i < 10)) {
        if (strcmp(vetorA[i], busca) == 0) {
            acha = 1;
        } else {
            i++;
        }
    }

    //dataOutput
    if (acha == 1)
        printf("\nA palavra %s foi encontrada na posição %d.", busca, i);
    else
        printf("\nA palavra não foi encontrada.");

    return 0;
}
