#include <stdio.h>
#include <string.h>
#include <windows.h>

#define N 20

int main(){
  SetConsoleOutputCP(CP_UTF8);
  SetConsoleCP(CP_UTF8);


  char origem[N] = {"Olá mundo!"};
  char destino[N];

  printf("Antes do strcpy: \n");
  puts(origem);
  puts(destino);

  strcpy(destino,origem);

  printf("Depois do strcpy: \n");
  puts(origem);
  puts(destino);
}