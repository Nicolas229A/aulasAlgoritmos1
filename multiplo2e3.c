#include <stdio.h>

int main (void) {
	
	int numero;
	
	printf("Informe um numero inteiro: ");
	scanf("%d", &numero);
	
	if(numero % 2 == 0 && numero % 3 == 0) {
		
		printf("O numero %d E multiplo de 2 e 3 ao mesmo tempo", numero);
		
	} else {
		printf("O numero %d NAO E multiplo de 2 e 3 ao mesmo tempo", numero);
	}	
	
	return 0;
}

/*Implemente um programa que solicite ao usuário um número inteiro e exiba na saída se ele é múltiplo de 2 e 3 ao mesmo tempo ou não.*/
