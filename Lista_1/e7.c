/*
Objetivo: Recebe o peso de uma pessoa e retorna o novo peso se a pessoa engordou 15% ou emagreceu 20%




Autor: Lucas Gonçalves
******************************************************************************************************************************************/
#include <stdio.h>




int
main(void)
{
	//recebe o peso
	printf("Use (.) invés de (,)\n");
	printf("Digite seu peso:\n");
	float peso;
	scanf("%f", &peso);
	
	//recebe o novo peso
	printf("Digite se novo peso\n");
	float pe1, pe2;
	
	pe1 = peso + 0.15 * peso;
	pe2 = peso + 0.2 * peso; 
	
	printf("Novo peso caso engorde 15%%: %.2fkg\n", pe1);
	printf("Novo peso caso emagreça 20%%: %.2fkg\n", pe2);
	
	return 0;
}
