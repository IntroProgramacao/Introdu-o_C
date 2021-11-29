/*
Objetivo: Implementar uma funcao que recebe um vetor de int com 15 posições e retorna a quantidade de nomeros pares




Autor: Lucas Gonçalves
****************************************************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>


int
contPar(int vet[15])
{
	//contador para os numeros pares
	int cPar = 0;
	
	//conta os pares
	for (int i = 0; i < 15; i++)
	{
		if (vet[i] % 2 == 0)
		{
			cPar++;
		}
	}
	return cPar;
}


int
main(void)
{
	//vetor de 15 posicoes
	int vetor[15];
	
	//pega o tamanho do vetor, como sizeof pega o tamanho do vetor de int dividi-se pela primeira posição
	size_t n = sizeof(vetor) / sizeof(vetor[0]);
	
	//le os valores
	for (int i = 0; i < n; i++)
	{
		printf("Digite o %iº valor\n", i+1);
		scanf(" %d", &vetor[i]);
	}
	
	//retorna a quantidade pares digitados
	printf("Você digitou %i numeros pares\n", contPar(vetor));
	
}
