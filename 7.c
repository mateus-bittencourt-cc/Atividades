#include<stdio.h>
main(){
    float custoFabricante;
    float custoDistribuidor;
    float custoimposto;
    float custoConsumidor;
    
	printf("Digite o valor da fabricacao:");
    scanf("%f",&custoFabricante);
    
	custoDistribuidor = (custoFabricante*0.28)+custoFabricante;
    
	custoimposto = (custoFabricante*0.45)+custoFabricante;
    
	custoConsumidor = custoDistribuidor +custoFabricante;
    
	printf("O carro custa %2.f:",custoimposto);

return 0;
}