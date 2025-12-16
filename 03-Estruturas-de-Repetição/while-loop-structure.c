#include <stdio.h>

int main()
{
    char name[30];
    int i;

    printf("Informe o nome: ");
    scanf("%s", name);

    i=0;
    while(i!=10)
    {
        printf("\n %d - %s", i, name); 
        i++;
    }

    return 0;
}