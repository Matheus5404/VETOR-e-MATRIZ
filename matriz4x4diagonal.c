#include <stdio.h>

// 5. Faça um programa que recebe uma matriz 4x4 e exibe os elementos da sua diagonal principal.

int main()
{
	int matriz[4][4];
	int i, j;
	
	printf("Digite os valores da matriz de 4x4:\n");
	
	for(i=0 ; i<4 ; i++)
	{
		for(j=0 ; j<4 ; j++)
		{
			printf("Elemento [%i][%i]: ", i, j);
			scanf("%i", &matriz[i][j]);
		}
	}
	
	printf("\nElementos da diagonal:\n");
	
	for(i=0 ; i<4 ; i++)
	{
		printf("%i ", matriz[i][i]);
	}
	printf("\n");
	
	return 0;
}
