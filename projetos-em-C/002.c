#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <stdlib.h>

int main()
{   
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int num;
    system("cls");
    
    printf("Informe um numero para descobrir se ele e divisivel por 5: ");
    scanf("%i", &num);
    if (num%5==0)
    {
        printf("O numero %i e divisivel por 5.", num);
    }
    else
    {
        printf("O numero %i nao e divisivel por 5.", num);
    }

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}