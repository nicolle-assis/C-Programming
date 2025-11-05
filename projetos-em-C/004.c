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
    char nome [30];   
    system("cls");

    printf("\tCADASTRO DE PLANO");
    printf("\n--------------------------------");
    printf("\nInforme o nome: ");
    scanf("%s", nome);
    printf("Informe a idade: ");
    scanf("%i", &id);
    printf("----------------------------------");
    printf("\n\tValor do Plano");
    if(id<=18)
    {
        printf("\nSeu plano ira custar: R$ 50,00");
    }
    else{
        if((id>=19) && (id<=29))
        {
            printf("\nSeu plano ira custar: R$ 70,00");
        }
        else{
            if((id>=30) && (id<=45))
            {
                printf("\nSeu plano ira custar: R$ 90,00");
            }
            else{
                if((id>=46) && (id<=65))
                {
                    printf("\nSeu plano ira custar: R$ 130,00");
                }
                else{
                    if(id>65)
                    {
                        printf("\nSeu plano ira custar: R$ 170,00");
                    }
                }
            }
        }
    }

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}