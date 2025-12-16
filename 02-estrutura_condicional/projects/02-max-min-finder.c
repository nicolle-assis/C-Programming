/* Program to find the largest and smallest numbers
   Reads 5 integers and determines the maximum and minimum values. */

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int main()
{
    SetConsoleOutputCP(65001);

    /* Variable declaration */
    int num1, num2, num3, num4, num5;
    int maxNumber, minNumber;
    system("cls");

    /* Data input */
    printf("Informe o 1º número: ");
    scanf("%i", &num1);
    printf("Informe o 2º número: ");
    scanf("%i", &num2);
    printf("Informe o 3º número: ");
    scanf("%i", &num3);
    printf("Informe o 4º número: ");
    scanf("%i", &num4);
    printf("Informe o 5º número: ");
    scanf("%i", &num5);

    /* Initialize max and min with the first number */
    maxNumber = num1;
    minNumber = num1;

    /* Determine the maximum number */
    if (num2 > maxNumber) maxNumber = num2;
    if (num3 > maxNumber) maxNumber = num3;
    if (num4 > maxNumber) maxNumber = num4;
    if (num5 > maxNumber) maxNumber = num5;

    /* Determine the minimum number */
    if (num2 < minNumber) minNumber = num2;
    if (num3 < minNumber) minNumber = num3;
    if (num4 < minNumber) minNumber = num4;
    if (num5 < minNumber) minNumber = num5;

    /* Output */
    printf("\nO maior número é: %d", maxNumber);
    printf("\nO menor número é: %d", minNumber);

    return 0;
}
