#include <stdio.h>

int main (void) {
	
	int n1, n2, totalSoma, totalDiferenca, totalProduto, totalQuociente;
	printf("Insira o primeiro numero: ");
	scanf("%d", &n1);
	printf("Insira o segundo numero: ");
	scanf("%d", &n2);
	totalSoma = n1 + n2;
	totalDiferenca = n1 - n2;
	totalProduto = n1 * n2;
	totalQuociente = n1 / n2;
	printf("A soma da: %d", totalSoma);
	printf("\nA diferenca da: %d", totalDiferenca);
	printf("\nO produto e: %d", totalProduto);
	printf("\nO quociente e: %d", totalQuociente);
	
	/*Por medidas de beleza*/
	
	printf("\nSoma: %d\nDiferenca: %d\nProduto: %d\nQuociente: %d", totalSoma, totalDiferenca, totalProduto, totalQuociente);
	
	return 0;
}
