#include <stdio.h>

int main()
{
    int id;
    char nome [30];   

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

    return 0;
}