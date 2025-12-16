#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    
    int mat[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int i, j;

    printf("Imprimindo a primeira linha: \n");
    for (j=0; j<3; j++){
        printf("%d\t", mat[0][j]);
    }

    printf("\n\nImprimindo a primeira coluna: \n");
    for(i=0; i<3; i++){
        printf("%d\n", mat[i][0]);
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