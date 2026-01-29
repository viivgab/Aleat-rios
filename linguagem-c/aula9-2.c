#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[]){

  SetConsoleOutputCP(CP_UTF8);
  SetConsoleCP(CP_UTF8);
  
  int i;

  if(argc > 1){
    printf("Foram inseridos %d argumentos:\n", argc);
    for(i=0; i<argc; i++){
      printf("%s\n", argv[i]);
    } 
  } else {
    printf("Não foram inseridos argumentos no programa.\n");
  }
}