#include <stdio.h>

int main (void) {
	int x, y;
	
	printf("Insira um numero inteiro para X: ");
	scanf("%d", &x);
	printf("Insira um numero inteiro para Y: ");
	scanf("%d", &y);
	
	if(x % y == 0) {
		printf("O numero X E divisivel por Y");
	} else {
		printf("O numero X NAO E divisivel por Y");
	}
	
	
	return 0;
}

/*Implemente um programa que solicite ao usu�rio dois n�meros inteiros X  e Y. Exiba na sa�da se X � divis�vel por Y.*/
