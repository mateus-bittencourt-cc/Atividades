#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int N1,N2,N3,MP;
	
	printf("Digite a primeira nota:\n");
	scanf("%i",&N1);
	
	printf("Digite a segunda nota:\n");
	scanf("%i",&N2);
	
	printf("Digite a terceira nota:\n");
	scanf("%i",&N3);
	
	MP=((N1*2)+(N2*3)+(N3*5))/(2+3+5);
	
	Printf(" A media ponderada e: %i", &MP);
	
	
	return 0;
}