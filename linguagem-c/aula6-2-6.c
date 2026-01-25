#include <stdio.h>
#include <string.h>
#include <windows.h>

#define N 50

int main(){
  SetConsoleOutputCP(CP_UTF8);
  SetConsoleCP(CP_UTF8);

  char hardText[N] = {"/exit"};
  char senha_usr[N];
  int ok;

  printf("Digite um texto: \n");
  gets(senha_usr);

  ok = strcmp(hardText, senha_usr);

  if(ok == 0)
    printf("Textos iguais. \n");
  else 
    printf("Textos diferentes. \n");
}