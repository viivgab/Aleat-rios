#include <stdio.h>
#include <string.h>
#include <windows.h>

#define N 50

int main(){
  SetConsoleOutputCP(CP_UTF8);
  SetConsoleCP(CP_UTF8);

  char s1[N] = {"Lógica de"};
  char s2[N] = {" Programação!"};

  printf("Antes do srtcat: \n");
  printf("str1: %s\n", s1);
  printf("str2: %s\n", s2);

  strcat(s1, s2);

  printf("Depois do strcat: \n");
  puts(s1);

}