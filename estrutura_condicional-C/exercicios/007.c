#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <stdio.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8); 

    int num1, num2, num3, num4, num5, greater, smaller;
    system("cls");

    greater = num1;
    smaller = num1;

    printf("Informe o 1º número: ");
    scanf("%i", &num1);
    printf("Informe o 2º número: ");
    scanf("%i", &num2);
    printf("Informe o 3º número: ");
    scanf("%i", &num3);
    printf("Informe o 4º número: ");
    scanf("%i", &num4);
    printf("Informe o 5º número: ");
    scanf("%i", &num5);

    //condicao maior
    if (num2>greater)
    {
        greater = num2;
    }
    if(num3>greater)
    {
        greater = num3;
    }
    if(num4>greater)
    {
        greater = num4;
    }
    if(num5>greater)
    {
        greater = num5;
    }
    //condicao menor
    if(num2<smaller)
    {
        smaller = num2;
    }
    if(num3<smaller)
    {
        smaller = num3;
    }
    if(num4<smaller)
    {
        smaller = num4;
    }
    if(num5<smaller)
    {
        smaller = num5;
    }

    printf("\nO maior número é: %d", greater);
    printf("\nO menor número é: %d", smaller);

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}