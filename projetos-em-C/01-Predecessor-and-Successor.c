//Predecessor-and-Successor

#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <stdlib.h>
int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

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


    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}