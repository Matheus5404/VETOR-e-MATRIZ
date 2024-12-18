#include <stdio.h>

/* 7. Define-se como elemento minimax de uma matriz o menor elemento da linha onde se encontra o maior elemento da matriz. 
Faça um programa que recebe uma matriz 4x4 e mostra qual é seu elemento minimax, bem como sua posição na matriz. */

int main()
{
	int matriz[4][4];
	int i, j;
	int maior, menor;
	int posMaiorLinha, posMaiorColuna=0, posMenorLinha, posMenorColuna;
	
	printf("Digite os valores da matriz 4x4:\n");
	for(i=0 ; i<4 ; i++)
	{
		for(j=0 ; j<4 ; j++)
		{
			printf("Elemento [%i][%i]: ", i, j);
			scanf("%i", &matriz[i][j]);
		}
	}
	
	maior = matriz[0][0];
	posMaiorLinha = posMaiorColuna;
	
	for(i=0 ; i<4 ; i++)
	{
		for(j=0 ; j<4 ; j++)
		{
			if(matriz[i][j] > maior)
			{
				maior = matriz[i][j];
				posMaiorLinha = i;
				posMaiorColuna = j;
			}
		}
	}
	
	menor = matriz[posMaiorLinha][0];
	posMenorLinha = posMaiorLinha;
	
	for(j=1 ; j<4 ; j++)
	{
		if(matriz[posMaiorLinha][j] < menor)
		{
			menor = matriz[posMaiorLinha][j];
			posMenorLinha = posMaiorLinha;
			posMenorColuna = j;
		}
	}
	
	printf("\nO elemento minmax e: %i\n", menor);
	printf("Posicao do elemento minimax: [%i][%i]\n", posMenorLinha, posMenorColuna);
	
	return 0;
}
