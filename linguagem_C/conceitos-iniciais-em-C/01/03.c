#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main() {
  // Define o valor das páginas de código UTF8 e default do Windows
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();

  // Define codificação como sendo UTF-8
  SetConsoleOutputCP(CPAGE_UTF8);

  // PROGRAMA : INICIO
  // --------------------------------------------------------------------
  
  printf("Olá, mundo com acentuação: ç, ã, é, ó!\n");
  // PROGRAMA : FINAL
  // --------------------------------------------------------------------

  // Retorna codificação padrão do Windows
  SetConsoleOutputCP(CPAGE_DEFAULT);
}