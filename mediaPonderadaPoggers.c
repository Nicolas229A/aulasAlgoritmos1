#include <stdio.h>

int main (void) {
	
	float n1, n2, mediaPonderada, po;
	int escolha;
	
	printf("Insira a nota N1: ");
	scanf("%f", &n1);
	printf("Insira a nota N2: ");
	scanf("%f", &n2);
	
	mediaPonderada = ((n1 * 5.5) + (n2 * 4.5)) / (5.5 + 4.5);
	
	printf("Media Ponderada: %f", mediaPonderada);
	
	printf("\nDeseja informar a nota da prova Optativa? (Digite 1 para SIM e 2 para NAO) ");
	scanf("%d", &escolha);
	
	if(escolha == 1) {
		printf("Insira a nota da Prova Optativa: ");
		scanf("%f", &po);
		
		if(n1 < n2) {
			
			mediaPonderada = ((po * 5.5) + (n2 * 4.5)) / (5.5 + 4.5);
			
		} else if (n2 < n1) {
			
			mediaPonderada = ((n1 * 5.5) + (po * 4.5)) / (5.5 + 4.5);
			
		} 
		
		printf("Media Ponderada (Com Optativa): %.3f", mediaPonderada);
		
	} else if(escolha == 2) {
		
		printf("Media Ponderada (Sem Optativa): %.3f", mediaPonderada);
		
	} else {
		
		printf("Isso nao e um valor valido");
		
	}
	
	
	return 0;
}

/*Implemente um programa que solicite ao usu�rio 2 notas de prova (N1 e N2) de um determinado estudante. 
Calcule e exiba na sa�da a m�dia ponderada, sabendo que o peso da primeira prova (N1) � 5.5 e o peso da segunda prova (N2) � 4.5. */

/*Em seguida, solicite ao usu�rio se ele deseja informar a nota da Prova Optativa (por exemplo, 1 para sim e 2 para n�o). 
Caso positivo, o programa deve solicitar esta nota e recalcular a m�dia com os mesmos pesos 
especificados anteriormente, substituindo a menor nota entre N1 e N2 pela nota da Prova Optativa. 
Por fim, o programa deve exibir na sa�da a m�dia final.
Caso o usu�rio n�o deseje informar a nota da Prova Optativa, o programa deve exibir a m�dia e finalizar.
*/
