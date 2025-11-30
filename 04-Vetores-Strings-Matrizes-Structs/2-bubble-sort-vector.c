#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int vectorA[10];
    int i, j, swap;

    for(i = 0; i < 10; i++){
        printf("Digite o %do elemento: ", i);
        scanf("%d", &vectorA[i]);
    }

    for (i = 0; i < 9; i++){
        for(j = i + 1; j < 10; j++){
            if(vectorA[i] > vectorA[j]){
                swap = vectorA[i];
                vectorA[i] = vectorA[j];
                vectorA[j] = swap;
            }
        }
    }

    printf("\nVETOR ORDENADO: \n");

    for (i = 0; i < 10; i++)
        printf("%d - ", vectorA[i]);

    return 0;
}
