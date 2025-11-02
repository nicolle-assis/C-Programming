#include <stdio.h>
#include <stdlib.h>

int main()
{
    int op;
    float tt;

    tt = 0;
    printf("\n  Cardapio");
    printf("\n============");
    printf("\n  Prato");
    printf("\n[1] Italiano - 750cal \n[2] Japones - 324cal \n[3] Salvadorenho - 545cal \n[4] Sem prato \n[5] Sair");
    printf("\nEscolha uma opcao: ");
    scanf("%i", &op);

    switch (op){
        case 1:
            tt = tt + 750;
        break;
        case 2:
            tt = tt + 324;
        break;
        case 3:
            tt = tt + 545;
        break;
        case 4:
            printf("Proximo!");
        break;
        case 5:
            printf("Obrigado pela atencao!");
            exit(EXIT_SUCCESS);
        break;
        default:
            printf("erro!opcao invalida");
            exit(EXIT_SUCCESS);
        break;
    }
    system("cls");

    printf("\n  Cardapio");
    printf("\n============");
    printf("\n  Bebida");
    printf("\n[1] Cha - 30cal \n[2] Suco de Laranja - 80cal \n[3] Refrigerante - 90cal \n[4] Sem bebida \n[5] Sair");
    printf("\nEscolha uma opcao: ");
    scanf("%i", &op);

    switch (op){
        case 1:
            tt = tt + 30;
        break;
        case 2:
            tt = tt + 80;
        break;
        case 3:
            tt = tt + 90;
        break;
        case 4:
            tt = tt;

        break;  
        case 5:
            printf("Obrigado pela atencao!");
            exit(EXIT_SUCCESS);
        break;
        default:
            printf("error!opcao invalida");
            exit(EXIT_SUCCESS);
        break;
    }
    printf("O total de calorias e: %.2f \n", tt);
    printf("Obrigado pela atencao!");

    return 0;
}