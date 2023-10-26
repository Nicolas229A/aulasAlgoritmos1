#include <stdio.h>

int main(void) {
	float valorTotal, comissao;
	printf("Insira o valor total das vendas do funcionario: ");
	scanf("%f", &valorTotal);
	
	comissao = (valorTotal / 100) * 12;
	
	
	printf("A comissao sera de: %.2f reais", comissao);
	return 0;
}
