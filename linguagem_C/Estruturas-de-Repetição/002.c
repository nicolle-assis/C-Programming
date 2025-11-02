#include <stdio.h>

int main()
{
    char name[30];
    int i;

    printf("Informe o nome: \n");
    scanf("%s", name);

    //Se houver a execução de **apenas uma linha de comando**, você pode **suprimir as chaves**. 
    for(i=1; i<=10; i++)
        printf("\n %s", name);

    return 0;
}