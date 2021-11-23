/*
Objetivo: construi que sabendo que Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce 3 centímetros por ano 
retorna em quantos anos zé alcançará chico



Autor: Lucas Gonçalves
****************************************************************************************************************************************************/
#include <stdio.h>




int
main(void)
{
	float altchico = 1.50, altze = 1.10;
	
	//conta os anos e adiciona cm a altura de ambos enquanto alte é < que altchico
	int cont = 0;
	do
	{
		altchico = altchico + 0.02;
		altze = altze + 0.03;
		cont++;
	} while (altchico > altze);
	
	printf("Zé passará altura que Chico em %i anos\n", cont);
	
	return 0;
}
