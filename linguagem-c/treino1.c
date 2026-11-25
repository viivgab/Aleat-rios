#include <stdio.h>

int main(int argc, char *argv){

  int numeros[] = {10, 20, 30};

  int *ptr = numeros;
  
  for(int i = 0; i < 3; i++){
    printf("%d\n", *(ptr+i));
  }

  return 0;
}