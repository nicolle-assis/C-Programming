#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(65001);
    system("cls");

    int vectorA[10];
    int i, found, search;

    for (i = 0; i < 10; i++){
        printf("Digite o %dº elemento: ", i);
        scanf("%d", &vectorA[i]);
    }

    printf("\nInforme o elemento que deseja buscar: ");
    scanf("%d", &search);

    i = 0;
    found = 0;

    while ((found == 0) && (i < 10)){
        if (vectorA[i] == search){
            found = 1;
        }
        else {
            i++;
        }
    }

    if (found == 1)
        printf("O elemento %d foi encontrado na posição %d.", search, i);
    else    
        printf("O elemento não foi encontrado.");

    return 0;
}