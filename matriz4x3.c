#include <stdio.h>

//1. Faça um programa que recebe uma matriz 4x3 e exibe ela formatada na tela.

int main()
{
	int matriz[4][3];
	int i, j;
	
	printf("Digite os valores para a matriz 4x3:\n");
	for(i=0 ; i<4 ; i++)
	{
		for(j=0 ; j<3 ; j++)
		{
			printf("Elemento [%i][%i]: ", i, j);
			scanf("%i", &matriz[i][j]);
		}
	}
	
	printf("\nMatriz 4x3:\n");
	for(i=0; i<4; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%i\t", matriz[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
