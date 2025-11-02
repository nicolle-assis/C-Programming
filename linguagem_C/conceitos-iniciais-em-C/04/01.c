#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){

    // Declaração de variáveis
    int idade;         // variável para armazenar a idade
    char nome[50];     // variável para armazenar o nome (até 49 caracteres + '\0')
    system("cls");

    // Entrada de dados
    printf("Digite a idade: ");   // pede ao usuário para digitar a idade
    scanf("%i", &idade);          // lê a idade e armazena na variável 'idade'

    printf("Digite o nome: ");    // pede ao usuário para digitar o nome
    scanf("%s", nome);            // lê o nome (apenas até o primeiro espaço)

    system("cls");
    printf("IDADE: %i\n", idade);
    printf("NOME: %s\n", nome);

    return 0;
}