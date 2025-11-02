#include <stdio.h>

int main()
{
    float at, result;
    char sexo;

    printf("\n  Peso Ideal");
    printf("\n--------------");
    printf("\nInforme o seu sexo [f/m]: ");
    scanf("%c", &sexo);
    printf("Informe a sua altura: ");
    scanf("%f", &at);

    if ((sexo=='f') || (sexo=='F'))
    {
        result = (62.1 * at) - 44.7;
        printf("\nSeu peso ideal: %.2fkg", result);
    }
    else{
        if((sexo=='m')||(sexo=='M'))
        {
            result = (72.7 * at) - 58;
            printf("\nSeu peso ideal: %.2fkg", result);
        }
    }

    return 0;
}