#include <stdio.h>

int main (void) {
	float mediaAritmetica, v1, v2, v3;
	
	scanf("%f", &v1);
	scanf("%f", &v2);
	scanf("%f", &v3);
	
	mediaAritmetica = (v1 + v2 + v3) / 3 ;
	
	printf("%.3f", mediaAritmetica);
	
	return 0;
}
