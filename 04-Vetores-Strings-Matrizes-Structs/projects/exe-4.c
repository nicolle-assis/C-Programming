#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int numbers[6];
    int i;

    for (i=0;i<6;i++){
        printf("Insira os valores: ");
        scanf("%d", &numbers[i]);
    }
    for (i=5;i>=0;i--){
        printf("\nOrdem dos valores: %d", numbers[i]);
    }
    
    return 0;
}