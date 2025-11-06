/* Calorie Counter Program
   Calculates the total calories based on the user's choices of main dish and drink. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Variable declaration */
    int option;
    float totalCalories = 0;
    system("cls");

    /* Main dish selection */
    printf("\n  Cardápio");
    printf("\n============");
    printf("\n  Prato");
    printf("\n[1] Italiano - 750cal \n[2] Japones - 324cal \n[3] Salvadorenho - 545cal \n[4] Sem prato \n[5] Sair");
    printf("\nEscolha uma opcao: ");
    scanf("%i", &option);

    /* Calculate calories for main dish */
    switch (option)
    {
        case 1:
            totalCalories += 750;
            break;
        case 2:
            totalCalories += 324;
            break;
        case 3:
            totalCalories += 545;
            break;
        case 4:
            printf("Proximo!");
            break;
        case 5:
            printf("Obrigado pela atencao!");
            exit(EXIT_SUCCESS);
        default:
            printf("Erro! Opcao invalida");
            exit(EXIT_SUCCESS);
    }

    system("cls");

    /* Drink selection */
    printf("\n  Cardápio");
    printf("\n============");
    printf("\n  Bebida");
    printf("\n[1] Cha - 30cal \n[2] Suco de Laranja - 80cal \n[3] Refrigerante - 90cal \n[4] Sem bebida \n[5] Sair");
    printf("\nEscolha uma opcao: ");
    scanf("%i", &option);

    /* Calculate calories for drink */
    switch (option)
    {
        case 1:
            totalCalories += 30;
            break;
        case 2:
            totalCalories += 80;
            break;
        case 3:
            totalCalories += 90;
            break;
        case 4:
            /* No calories added */
            break;
        case 5:
            printf("Obrigado pela atencao!");
            exit(EXIT_SUCCESS);
        default:
            printf("Erro! Opcao invalida");
            exit(EXIT_SUCCESS);
    }

    //output
    printf("\nO total de calorias e: %.2f \n", totalCalories);
    printf("Obrigado pela atencao!");

    return 0;
}
