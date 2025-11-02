/*insere o conteudo do arquivo stdio.h*/
#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <stdlib.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT= GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    /* declaração de variaveis*/
    int idade, ano;
    float altura;
    char nome[50];
    system("cls");

    /*entrada de dados*/
    /*mensagem do usuario*/
    printf("Digite o seu nome: ");
    scanf("%s", nome); /*leitura de nome*/
    
    /*mensagem do usuario*/
    printf("Digite a sua idade: ");
    scanf("%i", &idade); /*leitura da idade*/
    
    /*mensagem do usuario*/
    printf("Digite a sua altura: "); 
    scanf("%f", &altura); /*leitura da altura*/
    
    /*processamento*/
    /*calculo do ano de nascimento*/
    ano = 2025 - idade;

    /*saida de dados*/
    system("cls");
    printf("    DADOS DO(A) USUÁRIO(A)");
    printf("\n==============================");
    printf("\nNome: %s", nome);
    printf("\nAltura: %.2f", altura);
    printf("\nIdade: %i", idade);
    printf("\nAno de nascimento: %i", ano);

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}