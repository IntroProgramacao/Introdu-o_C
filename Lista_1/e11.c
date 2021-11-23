/*
Objetivo: Le 8 valores e retornar qual desses valores é negativo




Autor: Lucas Gonçalves
******************************************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>





int
main(void)
{
	//vetor que armazena o numero
	int num[8];
	//contador que conta os numeros negativos
	int neg = 0;
	
	//le os numeros
	for (int i = 0; i < 8; i++)
	{
		printf("Digite um número: ");
		scanf("%d", &num[i]);
		
		//verifica se é negativo
		if (num[i] < 0)
		{
			neg++;
		}
		system("clear");
	}
	printf("Você digitou %i numeros negativos\n", neg);
	
}
