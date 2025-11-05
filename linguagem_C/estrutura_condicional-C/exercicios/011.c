#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <stdlib.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    /*variables*/
    int codeCountry, codeWeigth;
    float cargoWeigth, cargoK, Fprice, Tvalue, Tax;
    system("cls");

    //data input
    //tabela de imposto
    printf("\nTabela de Imposto por Estado");
    printf("\n------------------------------");
    printf("\n[1] - 20%%");
    printf("\n[2] - 15%%");
    printf("\n[3] - 10%%");
    printf("\n[4] - 5%%");
    printf("\nInforme o código: ");
    scanf("%d", &codeCountry);

    //peso da carga
    printf("\nInforme o peso da carga em toneladas: ");
    scanf("%f", &cargoWeigth);

    //tabela de preco por quilo
    printf("\nTabela de preço por quilo (código da carga):");
    printf("\n[1] - 10 a 20 = 180");
    printf("\n[2] - 21 a 30 = 120");
    printf("\n[3] - 31 a 40 = 230");
    printf("\nInforme o código: ");
    scanf("%d", &codeWeigth);

    //calculations
    
    //calculo da carga
    cargoK = cargoWeigth * 1000;

    //calculo do preco por quilo
    if((codeWeigth>=10)&&(codeWeigth<=20))
    {
        Fprice = cargoK * 180;
    }
    else if((codeWeigth>=21)&&(codeWeigth<=30))
    {
        Fprice = cargoK * 120;
    }
    else if((codeWeigth>=31)&&(codeWeigth<=40))
    {
        Fprice = cargoK * 230;
    }
    else 
    {
    printf("\nerror!código inválido!");
    }

    //calculo do imposto
    switch (codeCountry){
        case 1:
        {
            Tax = Fprice * 0.20;
            break;
        }
        case 2:
        {   
            Tax = Fprice * 0.15;
            break;
        }
        case 3:
        {   
            Tax = Fprice * 0.10;
            break;
        }
        case 4: 
        {   
            Tax = Fprice * 0.05;
            break;
        }
        default:
        {
            printf("\nerror!código inválido");
        }
    }

    //preco total
    Tvalue = Fprice + Tax;

    //data output
    printf("\nPeso em quilos: %.2f", cargoK);
    printf("\nPreço da carga: R$%.2f",Fprice);
    printf("\nValor do Imposto: R$%.2f", Tax);
    printf("\nValor Total: R$%.2f", Tvalue);

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}