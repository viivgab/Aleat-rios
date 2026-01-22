#include <stdio.h>
#include <stdlib.h>

int main() {
  char nome[50];

  printf("Digite seu nome: ");
  scanf("%s", nome); //lê o que foi digitado

  printf("Ola %s, agora voce e oficialmente um, programador C!\n", nome);
  
  system("pause");

  return 0;
}