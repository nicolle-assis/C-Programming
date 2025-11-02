// comando para limpeza de entrada
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Função para limpar o buffer de entrada
void limpar_entrada()
{
    char c;
    // Enquanto não encontrar a quebra de linha '\n' ou fim de arquivo EOF,
    // lê e descarta os caracteres restantes no buffer
    while ((c = getchar()) != '\n' && c != EOF){}   
}
int main()
{

    int idade;
    char nome[50];
    system("cls");
    
    printf("Digite a idade: ");
    scanf("%i", &idade);
    printf("Digite o nome: ");

    // Limpa o buffer do teclado
    // Explicação: Quando o usuário aperta Enter após digitar a idade,
    // o '\n' fica no buffer. Se não for removido, o próximo fgets
    // lerá apenas esse '\n', resultando em string vazia.
    limpar_entrada(); 
    fgets(nome, 50, stdin); // Lê o nome completo (com espaços) digitado pelo usuário

    // Remove a quebra de linha que o fgets captura no final da string
    nome[strcspn(nome, "\n")] = '\0';

    printf("IDADE: %i\n", idade);
    printf("NOME: %s\n", nome);

    return 0;
}