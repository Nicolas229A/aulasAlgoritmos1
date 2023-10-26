#include <stdio.h>

int main(void) {
	int numero, ultimoDigito;
	printf("Informe um numero inteiro: ");
	scanf("%d", &numero);
	
	ultimoDigito = numero % 10;
	
	printf("O ultimo digito deste numero sera: %d", ultimoDigito);
	
	return 0;
}
