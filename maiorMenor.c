#include <stdio.h>

int main (void) {
	
	int n1, n2, n3, n4, n5, menor, maior;
	
	printf("Insira 5 numeros positivos: ");
	scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
	
	menor = n1;
	maior = n1;
	
	if (menor > n2){	
		menor = n2;
	} 
	
	if (menor > n3) {
		menor = n3;
	} 
	
	if (menor > n4){	
		menor = n4;
	} 
	
	if (menor > n5) {
		menor = n5;
	} 
	
	if (maior < n2){	
		maior = n2;
	} 
	
	if (maior < n3) {
		maior = n3;
	} 
	
	if (maior < n4){	
		maior = n4;
	} 
	
	if (maior < n5) {
		maior = n5;
	} 
	
	printf("O maior numero e %d enquanto o menor numero e %d", maior, menor);
	
	return 0;
}
