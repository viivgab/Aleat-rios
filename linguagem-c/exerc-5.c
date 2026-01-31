#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv){
  SetConsoleOutputCP(CP_UTF8);
  SetConsoleCP(CP_UTF8);

  int op;
  float n1, n2, res;

  printf("Digite 1 para somar;\n");
  printf("Digite 2 para subtrair;\n");
  printf("Digite 3 para multiplicar;\n");
  printf("Digite 4 para subtrair\n");
  scanf("%d", &op);

  do {
    printf("Digite sua opção (1 a 4):\n");
    scanf("%d", &op);
    if (op <1 || op > 4){
      printf("Opção inválida! Tente novamente.\n");
    }
  } while (op < 1 || op > 4);{
    printf("Digite o primeiro número:\n");
    scanf("%f", &n1);
    printf("Digite o segundo número:\n");
    scanf("%f", &n2);

    switch(op){
      case 1:
        res = n1 + n2;
        printf("Soma: %.2f.\n", res);
        break;
      case 2:
        res = n1 - n2;
        printf("Subtração: %.2f.\n", res);
        break;
      case 3:
        res = n1 * n2;
        printf("Multiplicação: %.2f.\n", res);
        break;
      case 4: 
        if(n2 != 0){
        res = n1 / n2;
        printf("Divisão: %.2f.\n", res);
        } else {
          printf("Divisão por zero.\n");
        }      
        break;
    }
  }
}