#include <stdio.h>

int main(){
  int n, i, Fib[50];

  Fib[0] = 0; //inicializando os primeiros 2 termos da seuquencia
  Fib[1] = 1;

  printf("Entre com a quantidade de termos da sequencia de Fibonacci: ");
  scanf("%d", &n);   //Entrada da quantidade de termos do OUTPUT da seq. FIB.

  for(i=2; i < n; i++){
    Fib[i] = Fib[i - 1] + Fib[i - 2]; //Calcula o prox. termo da sequencia
  }
  for(i=0; i < n; i++){   /*Estrutura de repetição para as condições de OUTPUT
                            da sequencia*/
    if(i < n-1){
      printf("%d ", Fib[i]);
    }else{
      printf("%d\n", Fib[i]);
    }
  }

  return 0;
}
