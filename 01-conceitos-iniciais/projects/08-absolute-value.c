#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    system("cls");
    int value;
    double floatValue;

    printf("Informe um valor inteiro negativo: ");
    scanf("%d", &value);
    printf("Informe um valor real negativo: ");
    scanf("%lf", &floatValue);

    printf("\nO valor absoluto de %d e %d", value, abs(value));
    printf("\nO valor absoluto de %.2f e %.2f", floatValue, fabs(floatValue));

    return 0;
}