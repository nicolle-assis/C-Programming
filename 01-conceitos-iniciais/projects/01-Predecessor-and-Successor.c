//Predecessor-and-Successor

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
int main()
{
    SetConsoleOutputCP(65001);

    //variable
    int num, predecessor, successor;
    system("cls");

    /*entrada de dados*/
    printf("Digite um número: ");
    scanf("%i", &num);
    printf("===================");
    
    /*calculo*/
    predecessor = num - 1;
    successor = num + 1;

    /*saida de dados*/
    printf("\nAntecessor do número %i: %i", num, predecessor);
    printf("\nSucessor do número %i: %i", num, successor);
    
    return 0;
}