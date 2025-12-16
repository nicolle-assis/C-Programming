/* programa que mostra uma mensagem de boas-vindas */

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int main()
{
    SetConsoleOutputCP(65001);
    /* declaração de variáveis */
    char nome[30];

    /* limpar a tela antes de começar */
    system("cls");

    /* entrada de dados */
    printf("\n\tHELLO, WORLD!\n");
    printf("\nQual é o seu nome, usuário? ");
    scanf("%s", nome);

    /* limpar a tela e exibir a mensagem final */
    system("cls");
    printf("Bem-vindo(a) ao curso de Algoritmos e Lógica de Programação, %s!\n", nome);
    printf("\n\n");

    return 0;
}
