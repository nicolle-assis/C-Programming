#include <stdio.h>
#include <stdlib.h> // necessário para system()

int main()
{
    // Limpa a tela do console
    system("cls");

    printf("Texto antes da limpeza...\n");

    // Pausa para o usuário ver a primeira mensagem
    system("pause");

    // Limpa a tela do console
    system("cls");

    printf("Tela limpa! Agora aparece só essa mensagem.\n");

    return 0;
}
