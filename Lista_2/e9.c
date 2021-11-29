/*
Objetivo: passar




Autor: Lucas Gonçalves
****************************************************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>


float
sF(float alt)
{
	float pIdeal;
	pIdeal = 72.7 * alt - 58;
	
	//retorna o valor
	return (pIdeal);
}

float
sM(float alt)
{
	float pIdeal;
	pIdeal = 62.1 * alt - 44.7;
	
	//retorna o valor
	return (pIdeal);
}

int
main(void)
{
	printf("Digite o sexo: \n");
	char s;
	scanf("%c", &s);
	
	printf("Digite a altura\n");
	float alt;
	scanf("%f", &alt);
	
	if (s == 'f')
	{
		printf("O pedo ideal é: %.2f\n", sF(alt));
		
	}else if (s == 'm')
	{
		printf("O pedo ideal é: %.2f\n", sM(alt));
	}else
	{
		exit(1);
	}
	return 0;
}
