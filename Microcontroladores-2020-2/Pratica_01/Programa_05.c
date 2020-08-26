#include <stdio.h>

int main(void) {
  int numero, resto;
  printf("Informe um numero:");
  scanf("%d", &numero);

  resto = numero %2;
  if(resto ==0){
    printf("numero par!\n");
    }
  else{
    printf("numero impar!\n");
    }
  printf("Fim doprograma!\n");
  return 0;
  }
