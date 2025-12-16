#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

#define N 50

int main()
{
    SetConsoleOutputCP(65001);
    system("cls");

    char s1[N] = {"Lógica de"};
    char s2[N] = {" Programação"};

    printf("Antes de strcat: \n");
    printf("str1: %s\n", s1);
    printf("str1: %s\n", s2);

    strcat(s1, s2);

    printf("\nDepois do strcat: \n");
    puts(s1);

    return 0;
}