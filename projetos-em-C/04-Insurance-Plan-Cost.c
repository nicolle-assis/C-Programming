//Insurance-Plan-Cost
#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int age;
    char name [30];   
    system("cls");

    printf("\tCADASTRO DE PLANO");
    printf("\n--------------------------------");
    printf("\nInforme o nome: ");
    scanf("%s", name);
    printf("Informe a idade: ");
    scanf("%i", &age);
    printf("----------------------------------");
    printf("\n\tValor do Plano");
    if(age<=18)
    {
        printf("\nSeu plano ira custar: R$ 50,00");
    }
    else{
        if((age>=19) && (age<=29))
        {
            printf("\nSeu plano ira custar: R$ 70,00");
        }
        else{
            if((age>=30) && (age<=45))
            {
                printf("\nSeu plano ira custar: R$ 90,00");
            }
            else{
                if((age>=46) && (age<=65))
                {
                    printf("\nSeu plano ira custar: R$ 130,00");
                }
                else{
                    if(age>65)
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