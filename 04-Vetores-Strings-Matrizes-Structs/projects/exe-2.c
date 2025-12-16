#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int numbers[5];
    int i, sum;

    for (i=0;i<5;i++){
        printf("Informe um valor: ");
        scanf("%d", &numbers[i]);
    }

    sum = 0;
    for (i=0;i<5;i++){
        sum = sum + numbers[i];
    }

    printf("A Soma total dos valores: %d\n", sum);

    return 0;
}