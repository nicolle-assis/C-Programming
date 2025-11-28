#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define PI 3.14159265

int main()
{
    system("cls");

    double x, ret, val;

    x = 45.0;
    val = PI / 180;
    ret = sin(x*val);

    printf("O seno de %lf e %lf", x, ret);

    return 0;
}