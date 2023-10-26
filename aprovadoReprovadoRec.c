#include <stdio.h>

int main (void) {
	
	float n1, n2, n3, mediaAritmetica;
	
	printf("Insira a nota N1: ");
	scanf("%f", &n1);
	printf("Insira a nota N2: ");
	scanf("%f", &n2);
	printf("Insira a nota N3: ");
	scanf("%f", &n3);
	
	mediaAritmetica = (n1 + n2 + n3) / 3;
	
	if(mediaAritmetica >= 6.0) {
		printf("Sua media foi %.1f e o estudante foi APROVADO!", mediaAritmetica);
	} else if (mediaAritmetica <= 5.9 && mediaAritmetica >= 4.1) {
		printf("Sua media foi %.1f e o estudante precisa fazer a RECUPERACAO!", mediaAritmetica);
	} else if(mediaAritmetica <= 4.0) {
		printf("Sua media foi %.1f e o estudante foi REPROVADO!", mediaAritmetica);
	}
	
	return 0;
}

/*Implemente um programa que solicite ao usuário 3 notas de prova (N1, N2 e N3) de um determinado estudante. Calcule e exiba na saída a média 
aritmética e, exiba ainda se o estudante foi Aprovado (caso a média seja pelo menos 6,0), Reprovado (caso a média seja inferior a 4,0), ou 
se precisa fazer a Recuperação (caso a média esteja entre 4.1 e 5.9).
*/
