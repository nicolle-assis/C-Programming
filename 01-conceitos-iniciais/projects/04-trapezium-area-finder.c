//trapezium-area-finder

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int main()
{
    SetConsoleOutputCP(65001);

    //Variables 
    float area, baseLarge, baseSmall, height;
    system("cls");

    /* Data input */
    printf("\nInforme a Base Maior do trapézio (cm): ");
    scanf("%f", &baseLarge);
    printf("Informe a Base Menor do trapézio (cm): ");
    scanf("%f", &baseSmall);
    printf("Informe a altura do trapézio (cm): ");
    scanf("%f", &height);

    /* Calculations */
    area = (baseLarge + baseSmall) * height / 2;

    /* Output */
    printf("\nBase maior: B = %.1f cm", baseLarge);
    printf("\nBase menor: b = %.1f cm", baseSmall);
    printf("\nAltura: h = %.1f cm", height);
    printf("\nÁrea do trapézio: %.1f cm²", area);

    return 0;
}
