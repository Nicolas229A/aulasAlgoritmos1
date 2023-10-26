#include <stdio.h>

int main (void) {
	int estudantes, notaEstudante, notas, mediaSala; 
	estudantes = 8;
	mediaSala = 0;
	notas = 0;
	
	while (estudantes <= 8 && estudantes >= 1) {
		printf("Nota do estudante: ");
		scanf("%d", &notaEstudante);,
		notas = notas + notaEstudante;
		
		estudantes = estudantes - 1;
	}
	
	mediaSala = notas / 8; 
		
		printf("Media da Sala: %d", mediaSala);
	
	return 0;
} 
