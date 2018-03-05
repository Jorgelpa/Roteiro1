// Programa que calcula o valor do desconto INSS do salario

#include <stdio.h>
#include <stdlib.h>

int main(void){

	double salario, desconto;

	printf("Entre com o salario: ");
	scanf("%lf", &salario);				//entrada do valor do salario

	if(salario > 0.0 && salario <= 420.0){    	//desconto de 8% se valor do salario for > 0.0 e < 420
		desconto = salario * 0.08;
		salario -= desconto;
	}else if(salario > 420.0 && salario <= 1350.0){		//desconto de 9% se valor do salario for > 420.0 e < 1350.0
		desconto = salario * 0.09;
		salario -= desconto;
	}else if(salario > 1350.0){			//desconto de 10% se valor do salario for > 1350
		desconto = salario * 0.1;
		salario -= desconto;
	}

	printf("\n\nValor do desconto: R$ %.2lf\n", desconto);
	printf("Valor do salario liquido: R$ %.2lf\n", salario);

	return 0;
}
