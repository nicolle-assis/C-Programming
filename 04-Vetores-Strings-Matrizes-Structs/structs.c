#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

#define TAM 50

struct tipo_pessoa{
    int idade;
    float peso;
    char nome[TAM];

};
typedef struct tipo_pessoa tipo_pessoa;

int main()
{
    SetConsoleOutputCP(65001);
    system("cls");

    //creating and initializing
    tipo_pessoa pes = {0, 0.0, "Teste"};
    
    printf("Início:\n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);

    //assigning values to the fields
    pes.idade = 10;
    pes.peso = 99.99;
    strcpy(pes.nome, "Texto");

    printf("\nAlterando os campos via código: \n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f \n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);

    //requesting input via the keyboard
    printf("\nInsira um número inteiro:\n");
    scanf("%d", &pes.idade);
    printf("Insira um número real:\n");
    scanf("%f", &pes.peso);
    fflush(stdin);
    printf("Insira uma palavra:\n");
    scanf("%s", pes.nome);

    printf("\nAlterando com dados do usuário:\n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);

    return 0;
}