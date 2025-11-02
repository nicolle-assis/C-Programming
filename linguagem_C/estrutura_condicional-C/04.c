/*calculadora basica usando funcao if*/
#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <stdlib.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    float num1, num2, resultado;
    int op;
    system("cls");

    printf("Digite o primeiro número: ");
    scanf("%f]", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    printf("Escolha a operação: \n1 - Soma \n2 - Subtração \n3 - Multiplicação \n4 - Divisão \n");
    scanf("%i", &op);

    if (op==1)
    {
        resultado = num1 + num2;
        printf("O resultado da soma é: %.3f\n", resultado);
    }
    else{
        if (op==2)
        {
            resultado = num1 - num2;
            printf("O resultado da subtração é: %.3f\n", resultado);
        }
        else{
            if(op==3)
            {
                resultado = num1 * num2;
                printf("O resultado da multiplicação é: %.3f", resultado);
            }
            else{
                if (op==4)
                {
                    resultado = num1 / num2;
                    printf("O resultado da divisão é: %.3f", resultado);
                }
            }
        }
    }


    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}