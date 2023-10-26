#include <stdio.h>

int main (void) {
	int a, b, c, aux;
	
	printf("Insira 3 valores: ");
	scanf("%d" "%d" "%d", &a, &b, &c); 
	
		if (b > c && c > a) { // 2 7 4
			aux = b; // aux = 7
			b = c; // b = 4
			c = aux; // c = 7
		}
		
		// printf("2 4 7");
		
		if (b > a && a > c) {
			aux = a;
			a = c;
			c = aux;
			
			aux = b;
			b = c;
			c = aux;
		}
		
		if (c > a && a > b) {
			aux = a;
			a = b;
			b = aux;
		}
		
		if (a > b && b > c) {
			aux = c;
			c = a;
			a = aux;
		}
		
		if (a > c && c > b) {
			aux = a;
			a = c;
			c = aux;
			
			aux = a;
			a = b;
			b = aux;
		}
		
		printf("Em ordem: %d, %d, %d\n", a, b, c);
	
	return 0;
}
