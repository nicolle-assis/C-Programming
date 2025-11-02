#include <stdio.h>

int main()
{
    char name[30];
    int i;

    printf("Informe o nome: \n");
    scanf("%s", name);

    /* 
       Estrutura de repetição 'for':
       - É usada quando sabemos previamente quantas vezes o bloco de código deve ser executado.
       - Sintaxe: for (inicialização; condição; incremento)
       
       No caso abaixo:
       i = 1 → inicializa a variável i com valor 1.
       i <= 10 → enquanto i for menor ou igual a 10, o bloco dentro do for será executado.
       i++ → após cada execução, incrementa o valor de i em 1 (ou seja, i = i + 1).
       
       Resultado: o nome digitado será impresso 10 vezes.
    */

    for (i=1; i<=10; i++)
    {
        printf("\n %s", name); //Exibe o nome a cada exibição
    }

    return 0;
}