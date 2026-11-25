#include <stdio.h>
#include <string.h>
#include <windows.h>

#define TAM 50

struct tipo_pessoa{
  int idade;
  float peso;
  char nome[TAM];
};

typedef struct tipo_pessoa tipo_pessoa;

int main(){
  SetConsoleOutputCP(CP_UTF8);
  SetConsoleCP(CP_UTF8);

  //Criando e inicializando
  tipo_pessoa pes = {0, 0.0, "Teste"};
  
  printf("Início:\n");
  printf("pes.idade: %d\n", pes.idade);
  printf("pes.peso: %.2f\n", pes.peso);
  printf("pes.nome: %s\n", pes.nome);

  //Atribuindo valores aos campos
  pes.idade = 10;
  pes.peso = 99.99;
  strcpy(pes.nome, "Texto");

  printf("\nAlterando os campos via código:\n");
  printf("pes.idade: %d\n", pes.idade);
  printf("pes.peso: %.2f\n", pes.peso);
  printf("pes.nome: %s\n", pes.nome);

  //Solicitando inserções via teclado

  printf("\nInsira um número inteiro: \n");
  scanf("%d", &pes.idade);
  printf("Insira um número real: \n");
  scanf("%f", &pes.peso);
  fflush(stdin);
  printf("Insira uma palavra: \n");
  scanf("%s", &pes.nome);

  printf("\nAlterando com dados do usuário:\n");
  printf("pes.idade: %d\n", pes.idade);
  printf("pes.peso: %.2f\n", pes.peso);
  printf("pes.nome: %s\n", pes.nome);
}