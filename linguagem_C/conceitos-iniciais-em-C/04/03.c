//comando fgets
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{

    int idade;
    char nome[50];
    system("cls");

    printf("Digite a idade: ");
    scanf("%i", &idade);   
    
    // EXPLICAÇÃO DO ERRO:
    // Quando o usuário digita a idade e aperta Enter,
    // o 'scanf' lê apenas o número e deixa o '\n' (quebra de linha) no buffer do teclado.
    // Esse '\n' não é consumido pelo scanf, então ainda está na entrada padrão (stdin).
    printf("Digite o nome: ");
    fgets(nome, 50, stdin);
    // Problema: fgets lê imediatamente o '\n' que sobrou no buffer
    // Resultado: a variável 'nome' recebe apenas a quebra de linha,
    // como se o usuário não tivesse digitado nada.


    printf("IDADE: %i\n", idade);
    printf("NOME: %s\n", nome); // Aqui o nome aparece vazio ou com apenas '\n'

    return 0;
}