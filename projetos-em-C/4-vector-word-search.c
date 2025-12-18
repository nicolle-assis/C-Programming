#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

#define MAX_WORDS 10
#define MAX_LENGTH 20

int main() 
{
    SetConsoleOutputCP(65001);
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

#include <locale.h>
#include <windows.h>

int main() 
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    system("cls");

    //variables
    char vetorA[10][20];  // 10 palavras, até 19 letras
    char busca[20];
    int i, acha;

    //dataInput
    for(i = 0; i < 10; i++) {
        printf("Digite uma palavra para por no %dº elemento: ", i);
        scanf("%19s", vetorA[i]); //%19s garante que não ultrapasse o limite de 19 caracteres.
    }

    //search
    printf("Informe a palavra que deseja buscar: ");
    scanf("%19s", busca);

    i = 0;
    acha = 0;

    while ((acha == 0) && (i < 10)) {
        if (strcmp(vetorA[i], busca) == 0) {
            acha = 1;
        } else {
            i++;
        }
    }

    //dataOutput
    if (acha == 1)
        printf("\nA palavra %s foi encontrada na posição %d.", busca, i);
    else
        printf("\nA palavra não foi encontrada.");

        return 0;
}