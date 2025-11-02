#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <stdlib.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int month;
    system("cls");

    printf("\nInforme um número e descubra qual é o mês: ");
    scanf("%d", &month);

    if(month==1)
    {
        printf("Mês: Janeiro");
    }
    else{
        if(month==2)
        {
          printf("Mês: Fevereiro");  
        }
        else{
            if(month==3)
            {
                printf("Mês: Março");
            }
            else{
                if(month==4)
                {
	                printf("Mês: Abril");
                }
                else{
                    if(month==5)
                    {
                        printf("Mês: Maio");
                    }
                    else{
                        if(month==6)
                        {
                            printf("Mês: Junho");
                        }
                        else{
                            if(month==7 )
                            {
                                printf("Mês: Julho");
                            }
                            else{
                                if(month==8)
                                {
                                    printf("Mês: Agosto");
                                }
                                else{
                                    if(month==9)
                                    {
                                       printf("Mês: Setembro"); 
                                    }
                                    else{
                                        if(month==10)
                                        {
                                            printf("Mês: Outubro");
                                        }
                                        else{
                                            if(month==11)
                                            {
                                                printf("Mês: Novembro");
                                            }
                                            else{
                                                if(month==12)
                                                {
                                                    printf("Mês: Dezembro");
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}