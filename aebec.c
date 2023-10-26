#include <stdio.h>

int main(void)
{
	int a, b, c, aMenor, bInter, cMaior;

	printf("Insira 3 valores diferentes: ");
	scanf("%d"
				"%d"
				"%d",
				&a, &b, &c);

	if (a > b && b > c)
	{

		cMaior = a;
		bInter = b;
		aMenor = c;
	}
	else if (a > c && c > b)
	{

		cMaior = a;
		bInter = c;
		aMenor = b;
	}
	else if (b > a && a > c)
	{

		cMaior = b;
		bInter = a;
		aMenor = c;
	}
	else if (b > c && c > a)
	{

		cMaior = b;
		bInter = c;
		aMenor = a;
	}
	else if (c > a && a > b)
	{

		cMaior = c;
		bInter = a;
		aMenor = b;
	}
	else if (c > b && b > a)
	{

		cMaior = c;
		bInter = b;
		aMenor = a;
	}

	printf("\n A = %d \n B = %d \n C = %d", aMenor, bInter, cMaior);

	return 0;
}

/*Implemente um programa em C que receba de entrada tr�es
valores inteiros, armazenando-os nas vari�aveis a, b e c, e
ordene esses valores de modo que, ao final, o menor valor
esteja armazenado na vari�avel a, o valor intermedi�ario esteja
armazenado na vari�avel b e o maior valor esteja armazenado
na vari�avel c.*/
