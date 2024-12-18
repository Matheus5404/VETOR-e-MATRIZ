#include <stdio.h>

//2. Faça um programa que recebe uma matriz 3x4 e mostra a soma dos elementos dela.

int main()
{
	int matriz[3][4];
	int i, j;
	int soma = 0;
	
	printf("Digite os valores para a matriz 3x4:\n");
	for(i=0 ; i<3; i++)
	{
		for(j=0 ; j<4 ; j++)
		{
			printf("Elemento [%i][%i]: ", i, j);
			scanf("%i", &matriz[i][j]);
		}
	}
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			soma += matriz[i][j];
			printf("Somando %i, soma atual: %i\n", matriz[i][j], soma);
		}
	}
	
	printf("\nA soma dos elementos da matriz e de: %i\n", soma);
	
	return 0;
}
