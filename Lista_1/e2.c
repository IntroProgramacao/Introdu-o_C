/*
Objetivo: Fazer um algoritimo que recebe o valor da gasolina, um dado valor a ser abastecido e retorna a quantidade em litros.




Autor: Lucas Gonçalves
****************************************************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>




int
main(void)
{
	//recebe o valor da gasolina e o valo a ser abastecido
	float vg;
	printf("Dê o valor da gasolina: \n");
	scanf("%f", &vg);
	
	//recebe o valor a ser abastecido
	float va;
	printf("Dê o valor a ser abastecido\n");
	scanf("%f", &va);
	
	//calcula a quantidade de litros de gasolina comprados
	float l = 0;
	l = l + (va / vg);
	printf("Valor da gasolina: %.2f\n", vg);
	printf("Valor pago: %.2f\n", va);
	printf("Quantidade de litros comprados: %.2f\n", l, "litros");
	
	return 0; 
}
