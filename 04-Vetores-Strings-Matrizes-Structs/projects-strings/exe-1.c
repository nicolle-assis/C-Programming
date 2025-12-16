#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    char s[20];

    printf("Digite algo (leitura pelo gets): \n");
    gets(s);
    fflush(stdin);  

    puts("\nResultado: ");
    puts(s);
    puts(" ");

    printf("Digite algo (leitura pelo fgets): \n");
    fgets(s, 20, stdin);
    fflush(stdin);

    puts("\nResultado: ");
    puts(s);



    return 0;
}