/*
Objetivo: Implementar uma função que recebe um valor inteiro e retorna false para negativo e true para positivo




Autor: Lucas Gonçalves
****************************************************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool
verInt(int val)
{
	//verifica se o valor e diferente de 0
	if (val == 0)
	{
		exit(1);
	}
	//bool para retornar se o valor é positivo
	bool rt;
	
	//verifica se é positivo ou negativo
	if (val % 2 == 0)
	{
		rt = true;
	}else
	{
		rt = false;
	}
	
	return (rt);
}


int
main(void)
{
	//recebe o valor
	int valor;
	//le o valor
	printf("Digite um valor inteiro\n");
	scanf("%d", &valor);
	
	//chama a função e passa o parametro e imprime direto
	printf(verInt(valor) ? "par" : "impar");
	printf("\n");
	
	
	return 0;
}
