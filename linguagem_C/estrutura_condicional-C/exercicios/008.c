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

    printf("Informe um número: ");
    scanf("%d", &num);

    if(num%3==0)
    {
        printf("\n%d é divisível por 3.", num);
    }
    else{
        printf("\n%d não é divisível por 3.", num);
    }

    if(num%7==0)
    {
        printf("\n%d é divisível por 7.", num);
    }else{
        printf("\n%d não é divisível por 7.", num);
    }



    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}