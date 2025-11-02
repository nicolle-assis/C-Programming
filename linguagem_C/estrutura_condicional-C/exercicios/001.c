#include <stdio.h>

int main()
{
    int num;

    printf("Informe um numero para descobrir se ele e divisilve por 5: ");
    scanf("%i", &num);
    if (num%5==0)
    {
        printf("O numero %i e divisivel por 5.", num);
    }
    else
    {
        printf("O numero %i nao e divisivel por 5.", num);
    }

    return 0;
}