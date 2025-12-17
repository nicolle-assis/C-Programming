#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

#define MAX_WORDS 10
#define MAX_LENGTH 20

int main() 
{
<<<<<<< HEAD
    SetConsoleOutputCP(65001);
=======
    SetConsoleOutputCP(65001); //saída em UTF-8
    SetConsoleCP(65001); //entrada em UTF-8
>>>>>>> project
    system("cls");

    char words[MAX_WORDS][MAX_LENGTH];  // vetor de palavras
    char search[MAX_LENGTH];            // palavra a buscar
    int i, found;
    char continueSearch;

    // Entrada de dados
    for(i = 0; i < MAX_WORDS; i++) {
        printf("Digite uma palavra para o %dº elemento: ", i+1);
        fgets(words[i], sizeof(words[i]), stdin);
        words[i][strcspn(words[i], "\n")] = '\0'; // remove o \n
    }

    system("cls");
    do {
        // Busca
        printf("\nInforme a palavra que deseja buscar: ");
        fgets(search, sizeof(search), stdin);
        search[strcspn(search, "\n")] = '\0';

        found = 0;
        for (i = 0; i < MAX_WORDS; i++) {
            if (strcmp(words[i], search) == 0) {
                found = 1;
                break;
            }
        }

        // Saída
        if (found)
            printf("\nA palavra '%s' foi encontrada na posição %d.\n", search, i);
        else
            printf("\nA palavra '%s' não foi encontrada.\n", search);

        printf("Deseja buscar outra palavra? (s/n): ");
        scanf(" %c", &continueSearch);
        getchar(); // consome o \n
    system("cls");
    } while (continueSearch == 's');

    return 0;
}