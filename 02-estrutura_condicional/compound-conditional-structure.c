/* Estrutura condicional composta em C */
#include <stdio.h> 
#include <math.h>
#include <windows.h>
#include <stdlib.h>

int main()
{
    SetConsoleOutputCP(65001);

    int quadrado, num;
    float raiz;
    system("cls");

    printf("\nDigite um número inteiro: ");
    scanf("%i", &num);

    if(num%2==0)    // Se o número for par
    {
        raiz = sqrt(num);   // Calcula a raiz quadrada do número
        printf("\nO número é par.");
        printf("\nA raiz quadrada é: %.3f", raiz);
    }
    else
    {
        quadrado = num * num;   //se não calcula o quadrado do número
        printf("\nO número é ímpar.");
        printf("\nO número quadrado é: %i", quadrado);
    }

    return 0;
}