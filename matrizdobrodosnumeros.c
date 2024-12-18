#include <stdio.h>

/* 4. Faça um programa que recebe uma matriz 3x3 e gera uma segunda matriz com o dobro de cada valor. 
No final, exiba a segunda matriz formatada na tela.  */

int main()
{
	int matriz1[3][3];
	int matriz2[3][3];
	int i, j;
	
	printf("Digite os valores da matriz 3x3: \n\n");
	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<3 ; j++)
		{
			printf("Elemento [%i][%i]: ", i, j);
			scanf("%i", &matriz1[i][j]);
		}
	}
	
	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<3 ; j++)
		{
			matriz2[i][j] = matriz1[i][j] * 2;
		}
	}
	
	printf("\nMatriz com o dobro dos valores: \n\n");
	
	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<3 ; j++)
		{
			printf("%i\t", matriz2[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
