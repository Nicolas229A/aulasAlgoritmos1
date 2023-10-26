#include <stdio.h>

int main (void) {
	float rendimentoFinal, montanteAcumulado, quantia, percentualRendimento;
	
	scanf("%f", &quantia);
	scanf("%f", &percentualRendimento);
	
	rendimentoFinal = (quantia / 100) * percentualRendimento;
	montanteAcumulado = quantia + rendimentoFinal;
	
	printf("Valor do rendimento: R$ %.2f", rendimentoFinal);
	printf("\nMontante Acumulado: R$ %.2f", montanteAcumulado);
	return 0;
}

/*Implemente um programa que solicite da entrada uma determinada quantia em reais e o percentual de rendimento de uma aplica��o em um m�s. Exiba na sa�da o valor do rendimento ao final de um m�s e, o montante acumulado.

Entrada:

1500.50
20

Sa�da esperada:

Valor do rendimento: R$ 300.10
Montante acumulado: R$ 1800.60

*/
