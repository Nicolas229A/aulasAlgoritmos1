#include <stdio.h>

int main (void) {
	int a, b, c, aux;
	
	printf("Insira 3 valores: ");
	scanf("%d" "%d" "%d", &a, &b, &c); 
						// 1   2   3
						// 2   3   1
						// 3   2   1
						// 1   3   2
						// 3   1   2
						// 2   1   3
						
	//scanf("3  2  1")
	
	if (b < a) { 
		aux = a; // aux = 3
		a = b; // a = 2
		b = aux; // b = 3
	}
	
	if (c < a) {
		aux = a; // aux = 2
		a = c; // a = 1 -> Aqui
		c = aux; // c = 2
	}
	
	if (c < b) {
		aux = c; // aux = 2 
		c = b; // c = 3 -> Aqui
		b = aux; // b = 2 -> Aqui
	}
	
	printf("Em ordem: %d, %d, %d\n", a, b, c);
	
	return 0;
}
