#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <windows.h>
#include <stdlib.h>

// Função para limpar o buffer de entrada
// Necessária quando usamos scanf antes de fgets
void limpar_entrada()
{
    char c;
    // Lê e descarta todos os caracteres restantes até encontrar '\n' ou EOF
    while ((c = getchar()) != '\n' && c != EOF)
    {
    }
}

// Função para ler um texto de tamanho N até a quebra de linha
void ler_texto(char *buffer, int length)
{
    fgets(buffer, length, stdin);   // Lê a linha completa (incluindo espaços)
    strtok(buffer, "\n");           // Remove a quebra de linha '\n' do final
}

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int idade1, idade2;             // Variáveis para armazenar as idades
    char nome1[50], nome2[50];      // Variáveis para armazenar os nomes
    system("cls");

    // Entrada do primeiro usuário
    printf("Digite a idade da primeira pessoa: ");
    scanf("%i", &idade1);           // Lê idade1
    printf("Digite o nome da primeira pessoa: ");
    limpar_entrada();               // Limpa o buffer do teclado
    ler_texto(nome1, 50);           // Lê nome1 completo
    printf("-----------------------------------------");

    // Entrada do segundo usuário
     printf("\nDigite a idade da segunda pessoa: ");
    scanf("%i", &idade2);           // Lê idade2
    printf("Digite o nome da segunda pessoa: ");
    limpar_entrada();               // Limpa o buffer do teclado novamente
    ler_texto(nome2, 50);           // Lê nome2 completo

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
