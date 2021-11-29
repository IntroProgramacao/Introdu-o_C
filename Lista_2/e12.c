/*
Objetivo: implementar funcao que retorno o fatorial de um numero




Autor: Lucas Gonçalves
****************************************************************************************************************************************************/
#include <stdio.h>





int
main(void)
{
	int fat(int valor);
	//recebe o valor
	int val;
	printf("Digite o valor\n");
	scanf(" %d", &val);
	printf("%i! = %i\n", val, fat(val));
	return (0);
}

int
fat(int valor)
{
	int fatorial;
	if (valor == 0)
	{
		fatorial = 1;
	}else
	{
		fatorial = valor * fat(valor - 1);
	}
	//retorna o valor
	return (fatorial);
}
