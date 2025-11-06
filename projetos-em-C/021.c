//multiplication table using for loop
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, num;
    system("cls");

    //data input
    printf("Informe o valor da tabuada: ");
    scanf("%d", &num);

    printf("Tabuada\n");
    for (i=1; i<=10; i++){
        printf("%d x %d = %d\n", num, i, num*i);
    }

    return 0;
}