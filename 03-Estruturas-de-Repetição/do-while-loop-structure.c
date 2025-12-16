#include <stdio.h>

int main()
{
    char name[30];
    int i;

    printf("Informe o nome: ");
    scanf("%s", name);
    
    i=0;
    do
    {
        printf("\n %d - %s", i, name);
        i++;
    }
    while (i!=10); // O loop continua enquanto (i != 10), ou seja, até 'i' valer 10.

    return 0;
}