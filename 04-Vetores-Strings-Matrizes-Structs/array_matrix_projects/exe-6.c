#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    system("cls");
    SetConsoleOutputCP(65001);

    int mat[3][3];
    int i, j, k, l, value, repeated;

    printf("Informe os valores da matriz 3x3 (de 1 a 9)\n");

    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            do{
                repeated = 0;
                printf("Valor da posição %dx%d: ", i, j);
                scanf("%d", &value);

                if (value<1 || value>9){
                    printf("error! Valor fora do intervalo de 1 a 9.\n");
                    repeated = 1;
                }

                for  (k=0; k<=i; k++){
                    for (l=0; l<(k == i ? j : 3); l++){
                        if (mat[k][l] == value){
                        repeated = 1;
                            printf("Valor já digitado! Digite outro. \n");
                        }
                    }
                }
          
            } while (repeated);
                
            mat[i][j] = value;
        } 
    }

    printf("\nImprimindo a matriz toda: \n");
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}