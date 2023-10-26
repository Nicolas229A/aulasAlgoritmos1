#include <stdio.h>

int main (void) {
	
	float valor, conversao;
	int forma;
	
	printf("Insira o valor do produto: ");
	scanf("%f", &valor);
	printf("Escolha a forma de pagamento: \n1- a vista no dinheiro ou Pix \n2- a vista no cartao de credito ou debito \n3- cheque ou 2x no cartao de credito \n4- 3 a 5x no cartao de credito \n5- 6 a 10x no cartao de credito: ");
	scanf("%d", &forma); 
	
	if (forma == 1) {
		
		conversao = (valor / 100) * 88;
		
		printf("Para essa forma de pagamento, tera 12 por cento de desconto. Entao o valor final do produto e R$ %.2f ", conversao);
		
	} else if(forma == 2) {
		
		conversao = (valor / 100) * 90;
		
		printf("Para essa forma de pagamento, tera 10 por cento de desconto. Entao o valor final do produto e R$ %.2f ", conversao);
		
	} else if(forma == 3) {
		
		conversao = (valor / 100) * 95;
		
		printf("Para essa forma de pagamento, tera 5 por cento de desconto. Entao o valor final do produto e R$ %.2f ", conversao);
		
	} else if (forma == 4) {
		
		conversao = (valor / 100) * 105;
		
		printf("Para essa forma de pagamento, tera 5 por cento de acrescimo. Entao o valor final do produto e R$ %.2f ", conversao);
		
	} else if (forma == 5) {
		
		conversao = (valor / 100) * 110;
		
		printf("Para essa forma de pagamento, tera 10 por cento de acrescimo. Entao o valor final do produto e R$ %.2f ", conversao);
		
	} else {
		
		printf("Opcao Invalida!");
		
	}
	
	return 0;
}

/*Implemente um programa que solicite da entrada o valor de um produto e a forma de pagamento. Calcule e exiba na saída o preço final do produto de acordo com as condições de pagamento:
*/
