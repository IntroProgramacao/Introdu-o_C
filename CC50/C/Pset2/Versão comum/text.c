/*Objetivo: Fazer um laço de repetição simples.

																																										Bibliotecas:
																		
																																										Referências:
																																										*CC50(fundação estudar)
																																										Autor: Lucasitron
******************************************************************************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<cc50.h>



int
main(int argc, char *argv[])
{
	string texto;
	printf("Digite o texto: \n");
	texto = GetString();
	printf("%s",texto);
}
