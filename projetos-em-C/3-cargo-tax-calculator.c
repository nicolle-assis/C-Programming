/* Cargo Price and Tax Calculator
   Reads cargo weight and codes, calculates total price including tax. */

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int main()
{
    SetConsoleOutputCP(65001);

    /* Variable declaration */
    int countryCode, weightCode;
    float cargoTon, cargoKg, price, totalPrice, tax;
    system("cls");

    /* Data input - Tax table by state */
    printf("\nTabela de Imposto por Estado");
    printf("\n------------------------------");
    printf("\n[1] - 20%%");
    printf("\n[2] - 15%%");
    printf("\n[3] - 10%%");
    printf("\n[4] - 5%%");
    printf("\nInforme o código: ");
    scanf("%d", &countryCode);

    /* Data input - Cargo weight in tons */
    printf("\nInforme o peso da carga em toneladas: ");
    scanf("%f", &cargoTon);

    /* Data input - Price per kilo table */
    printf("\nTabela de preço por quilo (código da carga):");
    printf("\n[1] - 10 a 20 = 180");
    printf("\n[2] - 21 a 30 = 120");
    printf("\n[3] - 31 a 40 = 230");
    printf("\nInforme o código: ");
    scanf("%d", &weightCode);

    /* Calculations */
    cargoKg = cargoTon * 1000; // Convert tons to kilograms

    /* Determine price per kilo */
    if (weightCode >= 10 && weightCode <= 20)
        price = cargoKg * 180;
    else if (weightCode >= 21 && weightCode <= 30)
        price = cargoKg * 120;
    else if (weightCode >= 31 && weightCode <= 40)
        price = cargoKg * 230;
    else
    {
        printf("\nErro! Código de peso inválido!");
        return 1; // Exit if invalid code
    }

    /* Determine tax based on country code */
    switch (countryCode)
    {
        case 1: tax = price * 0.20; break;
        case 2: tax = price * 0.15; break;
        case 3: tax = price * 0.10; break;
        case 4: tax = price * 0.05; break;
        default:
            printf("\nErro! Código do estado inválido!");
            return 1; // Exit if invalid code
    }

    /* Total price */
    totalPrice = price + tax;

    /* Output results */
    printf("\nPeso em quilos: %.2f", cargoKg);
    printf("\nPreço da carga: R$ %.2f", price);
    printf("\nValor do Imposto: R$ %.2f", tax);
    printf("\nValor Total: R$ %.2f", totalPrice);

    return 0;
}
