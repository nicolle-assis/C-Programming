#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int num, i = 1;

    printf("Qual tabuada gostaria de consultar? ");
    scanf("%d", &num);

    do{
        printf("\n%d x %d = %d", num, i, num * i);
        i++;
    }while (i<=10);

    return 0;
}