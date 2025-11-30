#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int vectorA[10];
    int i, found, search;

    for (i = 0; i < 10; i++){
        printf("Digite o %do elemento: ", i);
        scanf("%d", &vectorA[i]);
    }

    printf("Informe o elemento que deseja buscar: ");
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
        printf("O elemento %d foi encontrado na posicao %d.", search, i);
    else    
        printf("O elemento nao foi encontrado.");

    return 0;
}
