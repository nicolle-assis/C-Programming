/*programa que mostre uma mensagem de boas vindas*/

#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <stdlib.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    /*declaracao de variaveis*/
    char nome[30];
    system("cls");

    /*entrada de dados*/
    printf("\n\tHELLO, WORLD!");
    printf("\nQual é o seu nome usuário? ");
    scanf("%s", nome);
    
    /*saida de dados*/
    printf("Bem-vindo(a) ao curso de Análise e Desenvolvimento de Sistemas, %s", nome);

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}