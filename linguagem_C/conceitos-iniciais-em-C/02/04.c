#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>   // Biblioteca para manipulação de strings, necessária para strcpy()

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8); 

    // Declaração de variáveis
    int idade;            // idade da pessoa
    double salario;       // salário da pessoa
    char nome[50];        // nome da pessoa (até 49 caracteres + '\0')
    char sexo;            // sexo da pessoa (F ou M)

    system("cls");

    // Atribuição de valores às variáveis
    idade = 20;
    salario = 1518;
    strcpy(nome, "Nicolle de Assis"); // copia a string para a variável nome
    sexo = 'F';

    printf("A funcionária %s, do sexo %c, ganha R$%.2lf e tem %i anos\n", nome, sexo, salario, idade);

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}
