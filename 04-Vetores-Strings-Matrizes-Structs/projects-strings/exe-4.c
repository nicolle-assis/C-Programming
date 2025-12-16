#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

#define N 50

int main()
{
    system("cls");
    SetConsoleOutputCP(65001);

    char s[N];
    int i;

    printf("Digite um texto: \n");
    fgets(s, N, stdin);

    s[strcspn(s, "\n")] = '\0';

    i = strlen(s);
    printf("\nTamanho do texto: %d\n\n", i);

    printf("Impressão de posição a posição: \n");
    for (i=0; s[i] != '\0'; i++){
        printf("%c", s[i]);
    }

    return 0;
}