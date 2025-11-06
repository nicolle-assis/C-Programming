/* Ideal Weight Calculator
   Calculates the ideal weight based on gender and height. */

#include <stdio.h>

int main()
{
    /* Variable declaration */
    float height, idealWeight;
    char gender;
    system("cls");

    /* Data input */
    printf("\n  Peso Ideal");
    printf("\n--------------");
    printf("\nInforme o seu sexo [f/m]: ");
    scanf("%c", &gender);
    printf("Informe a sua altura: ");
    scanf("%f", &height);

    /* Calculations */
    if ((gender == 'f') || (gender == 'F'))
    {
        idealWeight = (62.1 * height) - 44.7;
        printf("\nSeu peso ideal: %.2fkg", idealWeight);
    }
    else if ((gender == 'm') || (gender == 'M'))
    {
        idealWeight = (72.7 * height) - 58;
        printf("\nSeu peso ideal: %.2fkg", idealWeight);
    }
    else
    {
        printf("\nSexo inválido! Por favor, digite 'f' ou 'm'.");
    }

    return 0;
}
