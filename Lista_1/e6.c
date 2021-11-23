/*
Objetivo: fazer um algoritimo que lê uma dada quantidade de hamburgueres e retorna a quantidade em kg dos ingredientes.
Ingredientes:
Queijo = 2 fatias (50g cada)
Presunto = 1 fatia (50g cada)
Carne = 1 rodela (100g cada)




Autor: Lucas Gonçalves
******************************************************************************************************************************************/
#include <stdio.h>




int
main(void)
{
	//lê a quantidade de hamburguer
	printf("Digite a quantidade de hamburgueres:");
	float h;
	scanf("%f", &h);
	
	//armazena o peso de cada ingrediente
	//formula para cada hamburguer qt = 2q*h, pt = p * h, c = ct * h
	float q = 50, p = 50, c = 100;
	
	//armazena o peso total dos ingredientes
	float qt = 0, pt = 0, ct = 0;
	//armazena a quantidade fatias utilizadas
	float qf, pf, cf;
	
	//efetuando o calculo
	qt = ((q * 2) * h) / 1000;
	qf = 2 * h;
	pt = (p * h) / 1000;
	pf = h;
	ct = (c * h) / 1000;
	cf = h;
	
	
	printf("\n");
	printf("Queijo: %.0f fatias %.2fkg\n", qf, qt);
	printf("Presunto: %.0f fatias %.2fkg\n", pf, pt);
	printf("Carne: %.0f rodelas %.2fkg\n", cf, ct);
	
	return 0;	
}
