#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int id;
    system("cls");

    printf("\tTitulo de Eleitor");
    printf("\n----------------------------------");
    printf("\nInforme a sua idade: ");
    scanf("%i", &id);

    if (id<=15)
    {
        printf("\n===============");
        printf("\n  Nao Eleitor");
        printf("\n===============");
    }
    else{
        if ((id>=18) || (id<=64))
        {
            printf("\n========================");
            printf("\n  Eleitor Obrigatorio");
            printf("\n========================");
        }
        else{
            printf("\n========================");
            printf("\n  Eleitor Facultativo");
            printf("\n========================");
        }
    }
    
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}