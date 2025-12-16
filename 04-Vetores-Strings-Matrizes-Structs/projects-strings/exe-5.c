#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

#define N 50

int main()
{
    system("cls");
    SetConsoleOutputCP(65001);

    char hardText[N] = {"exit"};
    char senha_usr[N];
    int ok;

    printf("Digite um texto: \n");
    fgets(senha_usr, N, stdin);

    senha_usr[strcspn(senha_usr, "\n")] = '\0';

    ok = strcmp(hardText, senha_usr);

    if (ok==0){
        printf("Textos iguais. \n");
    } else {
        printf("Textos diferentes. \n");
    }


    return 0;
}