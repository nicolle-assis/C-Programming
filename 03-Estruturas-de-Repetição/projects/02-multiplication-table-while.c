#include <stdio.h>
#include <stdlib.h>

int main ()
{
    system("cls");

    int num, i = 1;
  
    printf("Qual tabuada gostaria de ver? ");
    scanf("%d", &num);

    while (i<=10)
    {
        printf("\n%d x %d = %d", num, i, num * i);
        i++;
    }

    return 0;
}