#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int code;
    float taxRate;
} Country;

typedef struct {
    int code;
    float pricePerKg;
} Cargo;

int main() {
    Country countries[] = {
        {1, 0.20},
        {2, 0.15},
        {3, 0.10},
        {4, 0.05}
    };

    Cargo cargos[] = {
        {1, 180},
        {2, 120},
        {3, 230}
    };

    int countryCode, weightCode;
    float cargoTon, cargoKg, price, totalPrice, tax;
    int i, found = 0;

    printf("\nTabela de Imposto por Estado");
    printf("\n------------------------------");
    for (i = 0; i < 4; i++) {
        printf("\n[%d] - %.0f%%", countries[i].code, countries[i].taxRate * 100);
    }
    printf("\nInforme o codigo: ");
    scanf("%d", &countryCode);

    printf("\nInforme o peso da carga em toneladas: ");
    scanf("%f", &cargoTon);

    printf("\nTabela de preco por quilo (codigo da carga):");
    for (i = 0; i < 3; i++) {
        printf("\n[%d] - R$ %.2f", cargos[i].code, cargos[i].pricePerKg);
    }
    printf("\nInforme o codigo: ");
    scanf("%d", &weightCode);

    cargoKg = cargoTon * 1000; // converter toneladas em kg

    // procurar cargo
    found = 0;
    for (i = 0; i < 3; i++) {
        if (cargos[i].code == weightCode) {
            price = cargoKg * cargos[i].pricePerKg;
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("\nErro! Codigo de carga invalido!");
        return 1;
    }

    // procurar pais
    found = 0;
    for (i = 0; i < 4; i++) {
        if (countries[i].code == countryCode) {
            tax = price * countries[i].taxRate;
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("\nErro! Codigo de estado invalido!");
        return 1;
    }

    totalPrice = price + tax;

    printf("\nPeso em quilos: %.2f", cargoKg);
    printf("\nPreco da carga: R$ %.2f", price);
    printf("\nValor do Imposto: R$ %.2f", tax);
    printf("\nValor Total: R$ %.2f\n", totalPrice);

    return 0;
}