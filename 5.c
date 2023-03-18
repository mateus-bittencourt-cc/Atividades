#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int pessoaIdade, idadeDias, idadeAnos, idadeMeses;
	
	printf("Escreva a idade da pessoa em dias:");
	
	scanf("%d",&pessoaIdade);
	
	idadeAnos = pessoaIdade / 365;
	
	idadeMeses = (pessoaIdade % 365) / 30;
	
	idadeDias = pessoaIdade % 365 % 30;
	
	printf("%d ano(s)\n%d mes(es)\n%d dias(s)\n", idadeAnos, idadeMeses, idadeDias);
	
	return 0;
}