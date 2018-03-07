#include <stdio.h>
#include <string.h>

int main(){

  char string[50], aux[50];
  int i, j;
  int tam;

  printf("entre com a string a ser analisada: ");
  scanf("%s", &string);   //Entrada da string

  tam = strlen(string);

  for(j = tam-1, i=0; j > 0, i < tam; j--, i++)
    aux[j] = string[i];     //Inverte a string para verificar se eh palindromo

  if(strcmp(string, aux) == 0){   //Verifica se a string eh palindromo
    printf("A string %s e um palindromo!\n", string);
  }else{
    printf("A string %s nao eh um palindromo!\n", aux);
  }

  return 0;
}
