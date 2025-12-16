#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int numbers[5];
    int i, value;

    for (i=0;i<5;i++){
        printf("Informe os valores: ");
        scanf("%d", &numbers[i]);
    }

    printf("\nInforme um valor: ");
    scanf("%d", &value);

    for (i=0;i<5;i++){
        if (value==numbers[i]){
            printf("\no valor %d foi encontrado na posicao: %d", value, i);
        }
    }

    return 0;
}