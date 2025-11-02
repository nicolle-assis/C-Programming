/*estrutura condicional simples em C*/
/*incluindo o conteudo stdio.h*/

#include <stdio.h> 
#include <math.h> /*insere o conteúdo do arquivo math, que tem a função sqrt, cálculo da raiz quadrada*/
#include <locale.h>
#include <windows.h>
#include <stdlib.h>

int main()
{/*delimita o inicio das instruções*/
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int num;
    float raiz;
    system("cls");

    printf("Digite um número inteiro: ");
    scanf("%i", &num);

    /*
    Estrutura condicional simples:
        - É usada para tomar uma decisão e executar um bloco de código
        SOMENTE se a condição for verdadeira.

        Aqui, a condição é:
        if (num % 2 == 0)

        → O operador % (módulo) calcula o resto da divisão de "num" por 2.
        → Se o resto for 0, significa que o número é par.
        → Nesse caso, o bloco dentro do "if" será executado.]
        → Se for ímpar, o programa simplesmente ignora o bloco (não faz nada).
    */
    if (num %2 == 0)
    {
        raiz = sqrt(num);
        printf("\nA raiz quadrada é: %.3f", raiz);
    }

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0; /*retorno sem erro*/
}/*fim do conjunto de instruções*/