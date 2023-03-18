#include<stdio.h>
main(){
    float produto; 
    float frete;
    float despesa;
    float venda;
    float custo;
    float lucro;
    
		printf("Digite o valor do produto:");
    	scanf("%f",&produto);
        
		printf("Digite o valor do frete:");
    	scanf("%f",&frete);
        
		printf("Digite o quanto foi gasto com despesas:");
    	scanf("%f",&despesa);
    	
		custo = produto + frete + despesa;
        
		printf("Qual o valor da venda :");
    	scanf("%f",&venda);
    
		lucro = ((venda-custo)/custo*100);
    
		printf("O lucro neste produto e de :%.2f%%", lucro);
		
		return 0;
}