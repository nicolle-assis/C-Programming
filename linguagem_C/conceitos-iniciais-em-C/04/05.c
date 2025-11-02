#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <windows.h>
#include <stdlib.h>

// Função para limpar o buffer de entrada
void limpar_entrada()
{
    char c;
    // Enquanto não encontrar o '\n' (Enter) ou EOF,
    // lê e descarta os caracteres restantes no buffer.
    // Necessário quando usamos scanf antes de fgets
    while ((c = getchar()) != '\n' && c != EOF){}   
}

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int idade1, idade2;           // Variáveis para armazenar as idades
    char nome1[50], nome2[50];    // Variáveis para armazenar os nomes (até 49 caracteres)
    system("cls");

    // Entrada do primeiro usuário
    printf("Digite a idade da primeira pessoa: ");
    scanf("%i", &idade1);           // Lê idade1
    printf("Digite o nome da primeira pessoa: ");
    limpar_entrada();               // Limpa o buffer do teclado
    fgets(nome1, 50, stdin);       // Lê o nome1 completo, incluindo espaços
    strtok(nome1, "\n");           // Remove a quebra de linha '\n' capturada pelo fgets
    printf("-----------------------------------------");
    // Entrada do segundo usuário
    printf("\nDigite a idade da segunda pessoa: ");
    scanf("%i", &idade2);           // Lê idade2
    printf("Digite o nome da segunda pessoa: ");
    limpar_entrada();               // Limpa o buffer do teclado novamente
    fgets(nome2, 50, stdin);       // Lê o nome2 completo
    strtok(nome2, "\n");           // Remove a quebra de linha '\n' do final da string

    // Saída dos dados digitados
    system("cls");
    printf("DADOS DOS USUÁRIOS:");
    printf("\n\nIDADE DO PRIMEIRO USUÁRIO: %i", idade1);
    printf("\nNOME DO PRIMEIRO USUÁRIO: %s", nome1);
    printf("\n-----------------------------------------");
    printf("\nIDADE DO SEGUNDO USUÁRIO: %i", idade2);
    printf("\nNOME DO SEGUNDO USUÁRIO: %s", nome2);

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0; 
}
