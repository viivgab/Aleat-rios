#include <stdio.h>
#include <string.h>
#include <windows.h>

#define N 50

int main(){
  SetConsoleOutputCP(CP_UTF8);
  SetConsoleCP(CP_UTF8);

  char s[N];
  int i;

  printf("Digite um texto: \n");
  gets(s);
  i = strlen(s);
  printf("\nTamanho do texto: %d\n\n", i);
  
  printf("Impressão de posição a posição: \n");
  for(i=0;i<strlen(s);i++){
    printf("%c", s[i]);
  }
}