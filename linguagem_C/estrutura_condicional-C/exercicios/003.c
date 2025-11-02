#include <stdio.h>

int main()
{
    int id;

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
    

    return 0;
}