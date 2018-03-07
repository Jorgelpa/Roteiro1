#include <stdio.h>
#include <string.h>

int main(){
  double altura[11], maior, menor, somam=0, somaf=0, mediam, mediaf;
  int i, sumM=0, sumf=0;
  char sexo[11];

  printf("Entre com a altura e o sexo das 10 pessoas respectivamente: ");

  for(i=0; i < 10; i++){
    scanf("%lf %s", &altura[i], &sexo[i]);
    if(sexo[i] == 'M'){
      sumM++;
    }else if(sexo[i] == 'F'){
      sumf++;
    }
  }

  for(i=0; i < 10; i++){
    if(i == 0){
      menor = maior = altura[i];
    }else if(altura[i-1] < altura[i]){
      menor = altura[i-1];
      maior = altura[i];
    }
  }

  printf("\nMaior altura: %.1lf\n Menor altura: %.1lf\n", maior, menor);

  for(i=0; i < 10; i++){

    if(sexo[i] == 'M'){
      somam+=altura[i];
    }else if(sexo[i] == 'F'){
      somaf+=altura[i];
    }

  }

  mediam = somam / sumM;
  mediaf = somaf / sumf;

  printf("\nMedia das alturas 'M': %.1lf\n", mediam);
  printf("Media das alturas 'F': %.1lf\n", mediaf);

  printf("\nPessoas 'M': %d\n", sumM);
  printf("Pessoas 'F': %d\n", sumf);

  return 0;
}
