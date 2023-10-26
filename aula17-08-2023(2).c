#include <stdio.h>

int main (void) {
	float base, altura, area;
	
	printf("Insira a base e altura do triangulo: ");
	scanf("%f", &base);
	scanf("%f", &altura);
	
	area = (base * altura) / 2;
	
	printf("Area do triangulo: %f", area);
	printf("Area do triangulo: %.2f", area);
	printf("Area do triangulo: %.1f", area);
	
	return 0;
}
