#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int mat[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int i, j;

    printf("Imprimindo os valores da diagonal: \n");
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            printf("  ");
            if (i==j){
                printf("%d", mat[i][j]);
            }
        }
        printf("\n");
    }


    return 0;
}