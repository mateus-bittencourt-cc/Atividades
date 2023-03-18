#include <stdio.h>
#include <stdlib.h>


int main() {

	float salario, percentual, totalAumento, totalSalario;
	
	
	printf("Digite o salario: \n");
	scanf("%f", &salario);
	
	printf("Digite o percentual de aumento: \n");
	scanf("%f", &percentual);
	totalAumento = salario * percentual/100;
	printf("Aumento de R$ %.2f\n", totalAumento);
	
	totalSalario = salario + totalAumento;
	
	printf("Salario atual R$ %.2f\n", totalSalario);
	
	
	
	return 0;
}