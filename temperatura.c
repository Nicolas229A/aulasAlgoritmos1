#include <stdio.h>

int main(void) {
	float c, f;
	printf("Informe uma temperatura em Fahrenheit: ");
	scanf("%f", &f);
	
	c = (f - 32) / 1.8;
	
	printf("Esta temperatura em Celsius e igual a: %.2f", c);
	
	return 0;
}
