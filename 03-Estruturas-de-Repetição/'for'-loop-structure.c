#include <stdio.h>

int main()
{
    char name[30];
    int i;

    printf("Informe o nome: \n");
    scanf("%s", name);
    for (i=1; i<=10; i++)
    {
        printf("\n %s", name); //Exibe o nome a cada exibição
    }

    return 0;
}