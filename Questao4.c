#include <stdio.h>
#include <string.h>

int main(){

  char string[50], aux[50];
  int i, j, tam;

  printf("Entre com a palavra a ser escadeada: ");
  gets(string);    //INPUT da string a ser escadeada

  tam = strlen(string);

  for(i=0; i < tam; i++){
    aux[i] = string[i];
    printf("%s\n", aux);
  }

  return 0;
}
