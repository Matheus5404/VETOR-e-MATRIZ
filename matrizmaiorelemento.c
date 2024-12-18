#include <stdio.h>

//3. Faça um programa que recebe uma matriz 5x3 e informa qual é o maior elemento dela.

int main()
{
	int matriz[5][3];
	int i, j;
	int maior;
	
	printf("Digite os valoreas de 5x3:\n");
	for(i=0 ; i<5 ; i++)
	{
		for(j=0 ; j<3 ; j++)
		{
			printf("Elemento [%i][%i]: ", i, j);
			scanf("%i", &matriz[i][j]);
		}
	}
	
	maior = matriz[0][0];	
	
	for(i=0 ; i<5 ; i++)
	{
		for(j=0 ; j<3 ; j++)
		{
			if(matriz[i][j] > maior)
			{
				maior = matriz[i][j];
			}
		}
	}
	
	printf("\nO maior elemento da matriz: %i", maior);
	
	return 0;
}
