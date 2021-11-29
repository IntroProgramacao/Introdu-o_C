/*
Objetivo: Implementar uma funcao que recebe como parametro o raio de um circulo e retorna sua area




Autor: Lucas Gonçalves
****************************************************************************************************************************************************/
#include <stdio.h>
#include <math.h>
#define pi 3.1415926535898

//funcao do tipo float que retorna o raio
float
cCirc(float raio)
{
	//var que armazena o valor da area
	float area;
	
	//calcula a area
	area = pi * (raio*raio);
	
	//retorna o valor da area
	return (area);
}

int
main(void)
{
	float raio;
	printf("Dê o raio do circulo: \n");
	scanf("%f", &raio);
	
	float area = cCirc(raio);
	printf("O raio é: %.2f\n", area);
	
	return (0);
}
