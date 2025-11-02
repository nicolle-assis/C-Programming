/*estrutura case em C*/
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
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    printf("Escolha a operação: \n 1 - Soma \n 2 - Subtração \n 3 - Multiplicação \n 4 - Divisão \n");
    printf("OPÇÃO: ");
    scanf("%i", &op);

    /* 
        A estrutura switch-case é usada para executar diferentes blocos de código
        com base no valor de uma variável (neste caso, "op").

        - Cada "case" representa uma opção possível.
        - O comando "break" serve para encerrar a execução dentro do case atual
        - e impedir que os próximos cases sejam executados.
        - O "default" é executado caso o valor de "op" não corresponda a nenhum case.
    */

    switch(op)
    {
        case 1: // Se o valor de op for 1, faz a soma
            resultado = num1 + num2;
            printf("A soma é: %.3f\n", resultado);
            break;
        case 2:// Se o valor de op for 2, faz a subtração
            resultado = num1 - num2;
            printf("A subtração é: %.3f", resultado);
            break;
        case 3:// Se o valor de op for 3, faz a multiplicação
            resultado = num1 * num2;
            printf("A multiplicação é: %.3f", resultado);
            break;
        case 4: // Se o valor de op for 4, faz a divisão
            resultado = num1 / num2;
            printf("A divisão é: %.3f", resultado);
            break;
        default:// Caso o valor de op não seja 1, 2, 3 ou 4
            printf("Opção inválida!\n");
            break;
    }

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}