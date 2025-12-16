#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int main ()
{
    system("cls");
    SetConsoleOutput(65001);
    int i, n, first_sequence, second_sequence, current_value;

    first_sequence = 1;
    second_sequence = 0;

    printf("Quantos termos da sequência deseja ver? ");
    scanf("%d", &n);

    printf("%d ", second_sequence);
    printf("%d ", first_sequence);

    for (i=3; i<=n; i++){
        current_value = first_sequence + second_sequence;
        printf("%d ", current_value);
        second_sequence = first_sequence;
        first_sequence = current_value;
    }

    return 0;
}