//codido ERROR!

#include <stdio.h>
#include <string.h>

int main(){

    int idade;
    char nome[50];

    printf("Digite a idade: ");
    scanf("%i", &idade);    //o scanf não consome o caractere de nova linha (\n) que o usuário digita ao apertar Enter
    printf("Digite o nome: ");
    fgets(nome, 50, stdin); //quando fgets é chamado, ele lê esse \n sobrando, e nome fica vazio (ou só com a quebra de linha).
    
    printf("IDADE: %i\n", idade);
    printf("NOME: %s\n", nome);

    return 0;
}