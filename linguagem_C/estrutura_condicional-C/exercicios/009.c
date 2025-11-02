#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <stdlib.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int option;
    float salary, newSalary;
    system("cls");
    
    printf("\n\tTABELA DE CARGOS");
    printf("\n-----------------------------------");
    printf("\n[1] - Servente 40%%");
    printf("\n[2] - Pedreiro 35%%");
    printf("\n[3] - Mestre de Obras 20%%");
    printf("\n[4] - Técnico de Segurança 10%%");
    printf("\nConsultar código: ");
    scanf("%d", &option);

    switch (option){
        case 1:
        {
            printf("\nSalário atual: R$");
            scanf("%f", &salary);

            newSalary = salary * 1.4;

            printf("Novo salário: R$ %.2f", newSalary);
            
            break;
        }
        case 2:
        {
            printf("\nSalário atual: R$");
            scanf("%f", &salary);
            
            newSalary = salary * 1.35;

            printf("Novo salário: R$ %.2f", newSalary);
            break;
        }
        case 3:
        {
            printf("\nSalário atual: R$");
            scanf("%f", &salary);

            newSalary = salary * 1.2;

            printf("Novo salário: R$ %.2f", newSalary);
            break;
        }
        case 4:
        {
            printf("\nSalário atual: R$");
            scanf("%f", &salary);

            newSalary = salary * 1.1;

            printf("Novo salário: R$ %.2f", newSalary);
            break;
        }
        default:
        {
            printf("error!código inválido!");
            break;
        }
    }
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}