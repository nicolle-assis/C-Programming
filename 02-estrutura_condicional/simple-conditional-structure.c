/*estrutura condicional simples em C*/
/*incluindo o conteudo stdio.h*/

#include <stdio.h> 
#include <math.h> /*insere o conteúdo do arquivo math, que tem a função sqrt, cálculo da raiz quadrada*/
#include <windows.h>
#include <stdlib.h>

int main()
{/*delimita o inicio das instruções*/
    SetConsoleOutputCP(65001);

    int num;
    float raiz;
    system("cls");

    printf("Digite um número inteiro: ");
    scanf("%i", &num);
    
    if (num %2 == 0)
    {
        raiz = sqrt(num);
        printf("\nA raiz quadrada é: %.3f", raiz);
    }

    return 0; 
}