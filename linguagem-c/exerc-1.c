#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[]){
  SetConsoleOutputCP(CP_UTF8);
  SetConsoleCP(CP_UTF8);

  int n1, n2, n3, n4, s;

  printf("Digite o primeiro número:\n");
  scanf("%d", &n1);

  printf("Digite o segundo número:\n");
  scanf("%d", &n2);

  printf("Digite o terceiro número:\n");
  scanf("%d", &n3);

  printf("Digite o quarto número:\n");
  scanf("%d", &n4);

  s = n1 + n2 + n3 + n4;
  
  printf("Resultado da soma: %d.\n", s);

  sytem("pause");
  return 0;
}