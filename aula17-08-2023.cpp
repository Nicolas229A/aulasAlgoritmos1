#include <stdio.h>

int main(void) {
	
	int numero, dobro;
	
	printf("Insira um numero inteiro: ");
	scanf("%d", &numero);
	
	dobro = numero * 2;
	
	printf("O dobro do valor informado e: %d", dobro);
	
	return 0;
}
