/*
Objetivo: Receber um valor e retornar se o numero é perfeito ou não




Autor: Lucas Gonçalves
****************************************************************************************************************************************************/
#include <stdio.h>
#include <stdbool.h>


bool
nperf(long int val)
{
	long int soma = 0;
	for (long int i = 1; i < val; i++)
	{
		if (val % i == 0)
		{
			soma = soma + i;
		}
	}
	bool perf = false;
	if (soma == val)
	{
		perf = true;
	}
	
	//retorna o valor
	return (perf);
}	


int
main(void)
{
	long int valor;
	printf("Digite o valor: \n");
	scanf("%ld", &valor);
	printf(nperf(valor) ? "Perfeito" : "Imperfeito");
	printf("\n");
	
	return 0;
}
