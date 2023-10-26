#include <stdio.h>

int main (void) {
	float distancia, valorDolar, gasto;
	
	printf("Informe a distancia que deseja percorrer (em quilometros): ");
	scanf("%f", &distancia);
	printf("Qual e o valor do dolar em reais: ");
	scanf("%f", &valorDolar);
	
	gasto = (distancia / 11.5) * (valorDolar * 3.19);
	
	printf("O Total que sera gasto para percorrer esta distancia e: %.2f", gasto);
	
	
	return 0;
}
