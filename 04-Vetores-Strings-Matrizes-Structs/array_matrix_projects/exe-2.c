#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    system("cls");
    SetConsoleOutputCP(65001);

    int mat[2][2];
    int i, j, add = 0;

    printf("Digite os valores da matriz 2x2: \n");
    for (i=0; i<2; i++){
        for (j=0; j<2; j++){
            scanf("%d", &mat[i][j]);
        }
    }

    for (i=0; i<2; i++){
        for (j=0; j<2; j++){
            add += mat[i][j];
        }
    }

    printf("A soma dos elementos da matriz é: %d\n", add);

    return 0;
}