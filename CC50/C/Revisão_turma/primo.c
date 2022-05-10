/*Objetivo: Fazer um laço de repetição simples.

																																										Bibliotecas:
																		
																																										Referências:
																																										*CC50(fundação estudar)
																																										Autor: Lucasitron
******************************************************************************************************************************************/
#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>


bool prim(int n){
	int cont = 0;
	bool primo;
	for (int i = 1; i <= n; i++)
	{
		if (n%i == 0)
		{
			cont++;
		}
	}
	
	if (cont == 2)
	{
		primo = true;
	}else
	{
		primo = false;
	}
	
	return primo;
}


int
main(int argc, char *argv[])
{
	unsigned int n;
	printf("Digite um numero positivo\n");
	scanf("%d", &n);
	
	bool primo;
	primo = prim(n);
	
	if (primo)
	{
		printf("%i é primo\n", n);
	}else
	{
		printf("%i não é primo\n", n);
	}
}
