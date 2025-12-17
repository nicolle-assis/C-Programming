#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    system("cls");
    char nome[50], answer;
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    getchar(); // consome o '\n' deixado pelo scanf

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    // Remove o '\n' do final, se existir
    nome[strcspn(nome, "\n")] = '\0';

    printf("\nIdade: %d\nNome: %s\n", idade, nome);

    return 0;
}
