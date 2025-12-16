/* Square and Square Root Calculator
   Reads a positive integer and calculates its square and square root. */

#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <stdlib.h>

int main()
{
    SetConsoleOutputCP(65001);

    /* Variable declaration */
    int number;
    double square, squareRoot;
    system("cls");

    /* Data input */
    printf("Informe o valor de X: ");
    scanf("%i", &number);

    /* Calculations */
    square = number * number;
    squareRoot = sqrt(number);

    /* Output */
    printf("\n==============================");
    printf("\nQuadrado de %i = %.1lf", number, square);
    printf("\nRaiz Quadrada de %i = %.1lf", number, squareRoot);
    printf("\n==============================");

    return 0;
}
