#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    system("cls");

    float num1, num2, arithmeticMean, geometricMean, harmonicMean;

    printf("Informe o primeiro valor real: ");
    scanf("%f", &num1);
    printf("Informe o segundo valor real: ");
    scanf("%f", &num2);

    //arithmeticMean 
    arithmeticMean = (num1 + num2) / 2;
    //geometricMean
    geometricMean = sqrt(num1*num2);
    //harmonicMean
    harmonicMean = 2 / (1/num1 + 1/num2);

    printf("\nMédia aritmetica: %.2f", arithmeticMean);
    printf("\nMédia geometrica: %.2f", geometricMean);
    printf("\nMédia harmonica: %.2f", harmonicMean);
    return 0;
}