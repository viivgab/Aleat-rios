#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv){
  SetConsoleOutputCP(CP_UTF8);
  SetConsoleCP(CP_UTF8);

  float n1, n2;

  printf("Insira o primeiro número:\n");
  scanf("%f", &n1);
  printf("Insira o segundo número:\n");
  scanf("%f", &n2);

  if (n1 > n2){
    printf("O maior número é: %.2f\n", n1);
  } else {
    if (n2 > n1){    
    printf("O maior número é: %.2f\n", n2);
  } else {
    printf("Os dois números são iguais.\n");
  }
}
  system("pause");
  return 0;
}