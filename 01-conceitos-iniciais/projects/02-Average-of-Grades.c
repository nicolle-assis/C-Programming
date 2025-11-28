//Average-of-Grades
#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <stdlib.h>
int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    //variables
    float n1, n2, n3, n4, average;
    system("cls");

    //data input
    printf("\tMÉDIA DE NOTAS");
    printf("\n------------------------------");
    printf("\nDigite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);
    printf("Digite a quarta nota: ");
    scanf("%f", &n4);

    //calculation    
    average = (n1+n2+n3+n4) /4;

    //data output
    printf("\n--------------------------------");
    printf("\nA média de notas foi: %.1f", average);

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}