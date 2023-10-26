#include <stdio.h>

int main (void) {
	float mediaPonderada, v1, v2, v3, p1, p2, p3;
	
	scanf("%f", &v1);
	scanf("%f", &v2);
	scanf("%f", &v3);
	scanf("%f", &p1);
	scanf("%f", &p2);
	scanf("%f", &p3);
	
	mediaPonderada = ((v1 * p1) + (v2 * p2) + (v3 * p3)) / (p1 + p2 + p3);
	
	printf("Media Ponderada: %.3f", mediaPonderada);
	
	return 0;
}

