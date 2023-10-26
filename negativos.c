#include <stdio.h>

int main (void) {
	int vezes, n, negativos; 
	vezes = 10;
	negativos = 0;
	
	while (vezes <= 10 && vezes >= 1) {
		scanf("%d", &n);
		if (n < 0) {
			negativos = negativos + 1;
		}
		
		vezes = vezes - 1;
	}
		
		printf("Negativos: %d", negativos);
	
	return 0;
} 
