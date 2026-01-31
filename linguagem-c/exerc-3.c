#include <stdio.h>

int main(int argc, char *argv){
  int seg, min, hr;
  printf("Insira tempo em segundos:\n");
  scanf("%d", &seg);

  hr = seg / 3600;
  seg = seg - (3600*hr);

  min = seg / 60;
  seg = seg - (60 * min); 

  printf("Horas: %d\n", hr);
  printf("Minutos: %d\n", min);
  printf("Segundos: %d\n", seg);
  printf("%d:%d:%d", hr, min, seg);
  
  system("pause");
  return 0;
}