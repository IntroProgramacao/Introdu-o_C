/*Objetivo: Fazer um laço de repetição simples.

																																										Bibliotecas:
																		
																																										Referências:
																																										*CC50(fundação estudar)
																																										Autor: Lucasitron
******************************************************************************************************************************************/
#include<stdio.h>
#include<stdlib.h>



int
main(int argc, char *argv[])
{
	//laco que canta a musica
	for (int i = 100; i >= 0;  i--)
	{
		if (i>1)
		{
			printf("%i garrafas de cerveja no muro, bebo uma, jogo no lixo, %i garrafas de cerveja\n", i, i-1);
		
		}else if (i==1)
		{
			printf("%i garrafa de cerveja, no muro, bebo uma, jogo no lixo, nenhuma garrafa de cerveja\n", i);
		}
	}
}	
