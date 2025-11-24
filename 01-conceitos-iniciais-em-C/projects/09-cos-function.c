#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define PI 3.14159265

int main()
{
    system("cls");

    double x, ret, val;

    x = 60.0;
    val = PI / 180.0;
    ret = cos(x*val);
    printf("O cosseno de %lf e %lf", x, ret);

    x = 90.0;
    val = PI / 180.0;
    ret = cos(x*val);
    printf("\nO cosseno de %lf e %lf", x, ret);

    return 0;
}