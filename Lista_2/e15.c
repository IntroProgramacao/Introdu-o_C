/*
Objetivo: recebe 20 valores do tipo real e retorna a soma




Autor: Lucas Gonçalves
****************************************************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>


float
somatoria(float valor[5])
{
	float soma = 0;
	for (int i = 0; i < 5; i++)
	{
		soma = soma + valor[i];
	}
	return soma;
}

int
main(void)
{
	//recebe os numeros
	float val[5];
	
	
	for (int j = 0; j < (sizeof(val)/sizeof(val[1])); j++)
	{
		printf("Digite o valor: \n");
		scanf("%f", &val[j]);
	}
	
	printf("Somatoria = %.2f\n", somatoria(val));
	
	
}
