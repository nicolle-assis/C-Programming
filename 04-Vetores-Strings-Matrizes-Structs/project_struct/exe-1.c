#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

#define TAM 3

struct tipo_pessoa
{
    int idade;
    float peso;
    char nome[50];
};
typedef struct tipo_pessoa tipo_pessoa;

int main()
{
    system("cls");
    SetConsoleOutputCP(65001);

    tipo_pessoa lista[TAM];
    int i;

    for (i=0; i<TAM; i++){
        printf("\nInsira os dados(%d):\n", i+1);
        puts("Nome: ");
        scanf("%49[^\n]", lista[i].nome);

        puts("Idade: ");
        scanf("%d", &lista[i].idade);
        getchar();

        puts("Peso: ");
        scanf("%f", &lista[i].peso);
        getchar();
    }
    system("cls");

    puts("Seus Dados:\n");
    for (i=0; i<TAM; i++){
        printf("------------Pessoa %d------------\n", i+1);
        printf("\tNome: %s\n", lista[i].nome);
        printf("\tIdade: %d\n", lista[i].idade);
        printf("\tPeso: %.2f\n", lista[i].peso);
    }
    printf("-----------------------------------\n");

    return 0;
}