#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[]){
  SetConsoleOutputCP(CP_UTF8);
  SetConsoleCP(CP_UTF8);

  float sal, per, aumento, novo_sal;
  
  printf("Digite o salário:\n");
  scanf("%f", &sal);
  printf("Digite o percentual de aumento:\n");
  scanf("%f", &per);

  aumento = sal * per / 100;
  novo_sal = sal + aumento;

  printf("Valor do aumento: %.2f.\n", aumento);
  printf("Novo salário: %.2f.\n", novo_sal);

  system("pause");
  return 0;
}