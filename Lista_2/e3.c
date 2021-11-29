/*
Objetivo: Implementar uma funcao que recebe um valor inteiro positivos e retorna:
Valor logico verdadeiro para primo
valor logico falso para nao primo




Autor: Lucas Gonçalves
****************************************************************************************************************************************************/
#include <stdio.h>
#include <stdbool.h>
bool
verPrimo(int valor)
{
	bool primo;
	int cont = 0;
	for (int i = 2; i < valor; i++)
	{
		if (valor % i != 0)
		{
			cont++;
		}
	}
	if (valor == cont + 2)
	{
		primo = true;
	}else
	{
		primo = false;
	}
	return (primo);
}

int
main(void)
{
	printf("DIgite um valor inteiro positivo\n");
	int valor;
	scanf("%d", &valor);

	printf(verPrimo(valor) ? "true" : "false");
	printf("\n");
	return 0;	
}
