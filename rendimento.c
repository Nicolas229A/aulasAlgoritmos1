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

/*Implemente um programa que solicite da entrada uma determinada quantia em reais e o percentual de rendimento de uma aplicação em um mês. Exiba na saída o valor do rendimento ao final de um mês e, o montante acumulado.

Entrada:

1500.50
20

Saída esperada:

Valor do rendimento: R$ 300.10
Montante acumulado: R$ 1800.60

*/
