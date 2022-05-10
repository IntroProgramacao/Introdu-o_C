/*Objetivo: Fazer um laço de repetição simples.

																																										Bibliotecas:
																		
																																										Referências:
																																										*CC50(fundação estudar)
																																										Autor: Lucasitron
******************************************************************************************************************************************/
#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>

void primo(int x[10]){
	int cont = 1;
	int div = 2;
	int p = 100;
	bool primo = true;
	while(cont < 10){
		div = 2;
		primo = true;
		while(div < p && primo == true){
			if (p%div == 0)
			{
				primo = false;
			}else
			{
				div++;
			}
		}
		if (primo)
		{
			x[cont] = p;
			cont++;
			p++;
		}else
		{
			p++;
		}
	}
}

int
main(void)
{
	int x[10];
	primo(x);
	for (int i = 0; i < 10; i++)
	{
		printf("%i\n",x[i]);
	}
	
	
}
