#include <stdio.h>

// Faça um programa que recebe uma matriz 3x4 e mostra a soma dos elementos de uma linha escolhida pelo usuário.

int main()
{
	int matriz[3][4];
	int i, j, linha;
	int soma = 0;
	
	printf("Digite os valores da matriz 3x4:\n");
	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<4 ; j++)
		{
			printf("Elemento [%i][%i]: ", i, j);
			scanf("%i", &matriz[i][j]);
		}
	}
	
	do
	{
		printf("Digite numeros que deseja somar da linha de (0 a 2): ");
		scanf("%i", &linha);
		
		if(linha < 0 || linha > 2)
		{
			printf("Linha Invalida, Digite Novamente \n");
		}
	}while(linha < 0 || linha > 2);
	
	for(j=0 ; j<4 ; j++)
	{
		soma += matriz[linha][j];
	}
	
	printf("\nA soma dos elementos da linha %i e de: %i", linha, soma);
	
	return 0;
}
