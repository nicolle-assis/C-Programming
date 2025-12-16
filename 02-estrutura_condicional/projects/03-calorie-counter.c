/* Programa Contador de Calorias
   Calcula o total de calorias com base nas escolhas do usuário de prato principal e bebida. */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    system("cls");
    SetConsoleOutputCP(65001);

    /* Declaração de variáveis */
    int option;
    float totalCalories = 0;

    /* Seleção do prato principal */
    printf("\n  Cardápio");
    printf("\n============");
    printf("\n  Prato");
    printf("\n[1] Italiano - 750cal \n[2] Japonês - 324cal \n[3] Salvadorenho - 545cal \n[4] Sem prato \n[5] Sair");
    printf("\nEscolha uma opção: ");
    scanf("%i", &option);

    /* Calcular calorias do prato */
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
            printf("Próximo!");
            break;
        case 5:
            printf("Obrigado pela atenção!");
            exit(EXIT_SUCCESS);
        default:
            printf("Erro! Opção inválida");
            exit(EXIT_SUCCESS);
    }

    system("cls");

    /* Seleção da bebida */
    printf("\n  Cardápio");
    printf("\n============");
    printf("\n  Bebida");
    printf("\n[1] Chá - 30cal \n[2] Suco de Laranja - 80cal \n[3] Refrigerante - 90cal \n[4] Sem bebida \n[5] Sair");
    printf("\nEscolha uma opção: ");
    scanf("%i", &option);

    /* Calcular calorias da bebida */
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
            /* Nenhuma caloria adicionada */
            break;
        case 5:
            printf("Obrigado pela atenção!");
            exit(EXIT_SUCCESS);
        default:
            printf("Erro! Opção inválida");
            exit(EXIT_SUCCESS);
    }

    // Saída
    printf("\nO total de calorias é: %.2f \n", totalCalories);
    printf("Obrigado pela atenção!");

    return 0;
}
