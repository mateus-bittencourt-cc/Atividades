#include<stdio.h>
main(){
    float carrosVendas;
	float totalVendas;
	float salarioFixo;
	float salarioFinal;
    
	printf("Quantos carros o vendedor vendeu:\n");
    scanf("%f",&carrosVendas);
    
	printf("Digite o valor total das vendas:\n");
    scanf("%f",&totalVendas);
    
	printf("Digite o valor fixo do salario do funcionario:\n");
    scanf("%f",&salarioFixo);
    
	salarioFinal=salarioFixo+(totalVendas*5/100);
    
	printf("O salario total e %2.f\n",salarioFinal);

	return 0;
}