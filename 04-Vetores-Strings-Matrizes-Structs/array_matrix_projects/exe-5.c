#include <stdio.h>
#include <stdlib.h>
#include <windows.h> 

int main()
{
    SetConsoleOutputCP(65001);
    system("cls");

    int mat[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int i, j, greater;

    greater = mat[i][j];
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            printf("%d\t", mat[i][j]);
            if (mat[i][j]>greater){
                greater = mat[i][j];
            }
        }
        printf("\n");
    }

    printf("\nMaior número da Matriz: %d ", greater);

    return 0;
}