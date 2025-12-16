#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    float grade[4], average;
    int i;

    for (i=0;i<4;i++){
        printf("Informe a nota do(a) aluno(a): ");
        scanf("%f", &grade[i]);
    }

    average = (grade[0] + grade[1] + grade[2] + grade[3]) / 4;

    if (average>=7){
        printf("\nA media do(a) aluno(a) foi: %.2f", average);
        printf("O(A) aluno(a) esta aprovado(a)");
    } else {
        printf("\nA media do(a) aluno(a) foi: %.2f", average);
        printf("\nO(A) aluno(a) esta reprovado(a)");
    }
    return 0;
}