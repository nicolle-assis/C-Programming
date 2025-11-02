#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <stdio.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8); 

    int num1, num2, num3, num4, num5, smaller;
    system("cls");

    smaller = 0;

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

    smaller = 0;
    if(smaller<num1)
    {
        smaller = num1;
    }
    else{
        if(smaller<num2)
        {
            smaller = num2;
        }
        else{
            if(smaller<num3)
            {
                smaller = num3;
            }
            else{
                if(smaller<num4)
                {
                    smaller = num4;
                }
                else{
                    if(smaller<num5)
                    {
                        smaller = num5;
                    }
                }
            }
        }
    }

    printf("\nO menor número é: %d", smaller);

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}