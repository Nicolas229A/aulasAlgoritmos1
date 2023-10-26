#include <stdio.h>

int main (void) {
	
	float comprimento, largura, area;
	printf("Informe o comprimento do terreno");
	scanf("%f", &comprimento);
	printf("Informe a largura do terreno");
	scanf("%f", &largura);
	area = comprimento * largura;
	printf("A area e igual a: %.2f", area); //.2 -> 2 casas decimais
	
	
	
	return 0;
}
