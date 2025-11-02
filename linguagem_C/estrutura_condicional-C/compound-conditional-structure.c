/* Estrutura condicional composta em C */
#include <stdio.h> 
#include <math.h>
#include <locale.h>
#include <windows.h>
#include <stdlib.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int quadrado, num;
    float raiz;
    system("cls");

    printf("\nDigite um número inteiro: ");
    scanf("%i", &num);

    /*
        Estrutura condicional composta: if...else

        - O comando "if" testa uma condição. 
        - Caso essa condição seja verdadeira, o bloco de código dentro de "if" será executado.
        - Caso contrário, o bloco dentro de "else" é executado.

        Neste programa:
        - Verificamos se o número digitado é par ou ímpar usando o operador módulo (%).
        - Se num % 2 == 0 → o número é par.
        - Caso contrário → o número é ímpar.
    */
    if(num%2==0)    // Se o número for par
    {
        raiz = sqrt(num);   // Calcula a raiz quadrada do número
        printf("\nO número é par.");
        printf("\nA raiz quadrada é: %.3f", raiz);
    }
    else
    {
        quadrado = num * num;   // Calcula o quadrado do número
        printf("\nO número é ímpar.");
        printf("\nO número quadrado é: %i", quadrado);
    }

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}