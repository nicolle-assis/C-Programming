#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <windows.h>
#include <stdlib.h>

// Função para limpar o buffer de entrada
// Necessária quando usamos scanf antes de fgets
void limpar_entrada ()
{
    char c; 
    // Lê e descarta todos os caracteres restantes até encontrar '\n' ou EOF
    while ((c = getchar()) != '\n' && c != EOF) {}
}

// Função para ler um texto (string) de tamanho N até a quebra de linha
void ler_texto (char *buffer, int length)
{
    fgets(buffer, length, stdin);   // Lê a linha completa (incluindo espaços)
    strtok(buffer, "\n");           // Remove a quebra de linha '\n' do final
}

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int idade;            // Variável para armazenar a idade
    double altura, peso;  // Variáveis para armazenar altura e peso
    char nome[50];        // Variável para armazenar o nome completo
    char sexo;            // Variável para armazenar o sexo [F/M]
    system("cls");

    // Exibe título do programa
    printf("======================\n");
    printf("    DADOS PESSOAIS\t\n");
    printf("======================\n");

    // Entrada de dados
    printf("Digite o sexo [F/M]: ");
    scanf("%c", &sexo);  // Lê o sexo do usuário
    // Observação: após esse scanf, o buffer ainda contém '\n' do Enter pressionado

    printf("Digite o nome: ");
    limpar_entrada();     // Limpa o buffer antes de ler o nome
    ler_texto(nome, 50);  // Lê o nome completo, incluindo espaços

    printf("Digite a idade: ");
    scanf("%i", &idade);  // Lê a idade

    printf("Digite o peso: ");
    scanf("%lf", &peso);  // Lê o peso (double)

    printf("Digite a altura: ");
    scanf("%lf", &altura); // Lê a altura (double)

    system("cls");
    // Saída dos dados digitados
    printf("    DADOS DO(A) USUÁRIO(A)");
    printf("\n-------------------------------");
    printf("\nSEXO: %c\n", sexo);
    printf("NOME: %s\n", nome);
    printf("IDADE: %i anos\n", idade);
    printf("PESO:  %.2lfkg\n", peso);
    printf("ALTURA: %.2lfm\n", altura);

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0; 
}
