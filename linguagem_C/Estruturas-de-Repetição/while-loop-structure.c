#include <stdio.h>

int main()
{
    char name[30];
    int i;

    printf("Informe o nome: ");
    scanf("%s", name);

    /*  Estrutura de repetição WHILE:
        ------------------------------
        - O 'while' é uma estrutura de repetição que executa o bloco de comandos
          **enquanto** a condição for verdadeira.
    */
    i=0;
    while(i!=10)
    {
        printf("\n %d - %s", i, name); i++;
    }

    return 0;
}