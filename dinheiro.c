#include <stdio.h>

int main (void) {
	int dinheiro, n200, n100, n50, n20, n10, n5, n2, n1;
	
	scanf("%d", &dinheiro);
	
	n200 = dinheiro / 200;
	n100 = (dinheiro - (n200 * 200)) / 100;
	n50 = (dinheiro - (n200 * 200 + n100 * 100)) / 50;
	n20 = (dinheiro - (n200 * 200 + n100 * 100 + n50 * 50)) / 20;
	n10 = (dinheiro - (n200 * 200 + n100 * 100 + n50 * 50 + n20 * 20)) / 10;
	n5 = (dinheiro - (n200 * 200 + n100 * 100 + n50 * 50 + n20 * 20 + n10 * 10)) / 5;
	n2 = (dinheiro - (n200 * 200 + n100 * 100 + n50 * 50 + n20 * 20 + n10 * 10 + n5 * 5)) / 2;
	n1 = (dinheiro - (n200 * 200 + n100 * 100 + n50 * 50 + n20 * 20 + n10 * 10 + n5 * 5)) % 2;
	printf(" %d nota(s) de 200\n %d nota(s) de 100\n %d nota(s) de 50\n %d nota(s) de 20\n %d nota(s) de 10\n %d nota(s) de 5\n %d nota(s) de 2\n %d nota(s) de 1", n200, n100, n50, n20, n10, n5, n2, n1);
	
	return 0;
}

/*500 - 400 / 100 */
