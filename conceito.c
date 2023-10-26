#include <stdio.h>

int main (void) {
	
	float mediaFinal;
	
	printf("Insira a media final do aluno: ");
	scanf("%f", &mediaFinal);
	
	if(mediaFinal < 6) {
		
		printf("CONCEITO D");
		
	} else if (mediaFinal >= 6 && mediaFinal <= 7) {
		
		printf("CONCEITO C");
		
	} else if (mediaFinal > 7 && mediaFinal <= 8.5) {
		
		printf("CONCEITO B");
		
	} else if (mediaFinal > 8.5) {
		
		printf("CONCEITO A");
		
	}
	
	return 0;
}
