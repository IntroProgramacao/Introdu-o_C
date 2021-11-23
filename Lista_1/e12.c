/*
Objetivo: Recebe as medidas de 5 triangulos retangulos, calcula a area de cada e retorna a media das areas calculadas




Autor: Lucas Gonçalves
******************************************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>


int
main(void)
{
	//recebe as medidas do triangulo, altura, base e a soma das areas respectivamente
	float tra, trb, soma = 0;	
	//armazena a area do triangulo
	float area[5];
	
	for (int i = 0; i < 5; i++)
	{
		printf("Digite a altura: \n");
		scanf("%f", &tra);
		printf("Digite a base: \n");
		scanf("%f", &trb);
		area[i] = (tra * trb) / 2;
		soma = soma + area[i];		
	}
	//calcula a media
	float media = soma / 5;
	
	printf("A media é: %.2f\n", media);
	return 0;
}
