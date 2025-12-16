/* Circle Area and Perimeter Calculator
   Reads the radius of a circle and calculates its area and perimeter. */

#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <stdlib.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main()
{
    SetConsoleOutputCP(65001);

    /* Variable declaration */
    double radius, area, perimeter;
    system("cls");

    /* Data input */
    printf("Informe o raio de um círculo: ");
    scanf("%lf", &radius);

    /* Calculations */
    area = M_PI * pow(radius, 2);
    perimeter = 2 * M_PI * radius;

    /* Output */
    printf("\n===================");
    printf("\nÁrea de %.2lf = %.2lf", radius, area);
    printf("\nPerímetro de %.2lf = %.2lf", radius, perimeter);
    printf("\n===================\n");

    return 0;
}
