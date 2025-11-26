#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int num;
    double square, squareRoot, naturalLogarithm, baseLogarithm;

    printf("Informe um valor inteiro: ");
    scanf("%d", &num);

    //square
    square = pow(num, 2);

    //squareRoot
    squareRoot = sqrt(num);

    //naturalLogarithm
    naturalLogarithm = log(num);

    //baseLogarithm
    baseLogarithm = log10(num);

    printf("\nO quadrado: %.2lf", square);
    printf("\nA raiz quadrada: %.2lf", squareRoot);
    printf("\nO logaritmo natural: %.2lf", naturalLogarithm);
    printf("\nO logaritmo base 10: %.2lf", baseLogarithm);

    return 0;
}