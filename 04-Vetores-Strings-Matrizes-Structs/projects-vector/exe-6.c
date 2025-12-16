#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int numbers[10];
    int i, count;

    for (i=0;i<10;i++){
        printf("Informe os valores: ");
        scanf("%d", &numbers[i]);
    }

    count = 0;
    for (i=0;i<10;i++){
        if (numbers[i]%2==0){
            printf("%d | ", numbers[i]);
            count++;
        }
    } 

    printf("\nQuantidade de valores pares: %d", count);

    return 0;
}