/*Objetivo: Fazer um laço de repetição simples.

																																										Bibliotecas:
																		
																																										Referências:
																																										*CC50(fundação estudar)
																																										Autor: Lucasitron
******************************************************************************************************************************************/
#include<stdio.h>
#include<stdlib.h>

#include "arquivo.h"

#define MaxNome 50
#define MaxArq 25


int
main(int argc, char *argv[])
{
	FILE *Arq;
	char *nome[MaxNome] = {"agenda"};
	
	char arq[MaxArq];
	
	Arq =creat(nome);
	fputs(arq,Arq);
	printf("%i\n",arq);
	
}
