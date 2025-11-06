//divisor checker
#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <stdlib.h>

int main()
{   
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int x, y;
    system("cls");
    
    printf("X é divisível por Y?\n");
    printf("Informe o valor de X: ");
    scanf("%d", &x);
    printf("Informe o valor de Y: ");
    scanf("%d", &y);

    if(x%y==0){
        printf("O valor %d é divisível por %d", x, y);
    }
    else{
        printf("O valor %d não é divisível por %d", x, y);
    }
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}