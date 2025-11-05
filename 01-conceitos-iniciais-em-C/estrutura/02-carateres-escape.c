#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main() 
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    printf("Demonstração dos caracteres de escape em C:\n\n");

    // \n - Nova linha
    printf("1) \\n - Nova linha:\n");
    printf("Linha 1\nLinha 2\n\n");

    // \t - Tabulação
    printf("2) \\t - Tabulação:\n");
    printf("Coluna1\tColuna2\tColuna3\n\n");

    // \b - Retrocesso
    printf("3) \\b - Retrocesso:\n");
    printf("ABC\bD\n");
    printf("(O \\b apagou o 'C' e colocou 'D' no lugar)\n\n");

    // \" - Aspas duplas
    printf("4) \\\" - Aspas duplas:\n");
    printf("Ela disse: \"Oi!\"\n\n");

    // \\ - Contrabarra
    printf("5) \\\\ - Contrabarra:\n");
    printf("Caminho: C:\\\\Usuario\\\\Documentos\n\n");

    // \f - Salto de página de formulário
    printf("6) \\f - Salto de página:\n");
    printf("Primeira parte\fSegunda parte\n");
    printf("(Em terminais modernos, o \\f pode não ter efeito visível)\n\n");

    // \0 - Nulo
    printf("7) \\0 - Nulo:\n");
    char texto[] = "Oi\0Tudo bem?";
    printf("%s\n", texto);
    printf("(O \\0 encerra a string, então o resto não é exibido)\n\n");

    printf("Fim da demonstração.\n");

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}
