/* Multiplication Table Program
   Prints the multiplication table of a number from 1 to 10. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Variable declaration */
    int number, i;
    system("cls");

    /* Data input */
    printf("Informe o valor da tabuada: ");
    scanf("%d", &number);

    /* Display multiplication table */
    printf("\nTabuada de %d:\n", number);
    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}
