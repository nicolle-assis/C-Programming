#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int numbers[8];
    int i, less, greater;

    for (i=0;i<8;i++){
        printf("Informe um valor: ");
        scanf("%d", &numbers[i]);
    }

    less = numbers[0];
    for (i=0;i<8;i++){
        if (numbers[i]<less)
            less = numbers[i]; 
    }

    greater = numbers[0];
    for (i=0;i<8;i++){
        if (numbers[i]>greater)
            greater = numbers[i];
    }

    printf("Maior valor = %d\n", greater);
    printf("Menor valor = %d\n", less);


    return 0;
}