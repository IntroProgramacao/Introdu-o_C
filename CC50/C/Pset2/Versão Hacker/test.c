/*Objetivo: Fazer um laço de repetição simples.

																																										Bibliotecas:
																		
																																										Referências:
																																										*CC50(fundação estudar)
																																										Autor: Lucasitron
******************************************************************************************************************************************/
#include<stdbool.h>
#include<cs50.h>
#include<crypt.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<strings.h>
#include<unistd.h>
#define _XOPEN_SOURCE



int
main(int argc, char *argv[])
{
	string senha = get_string("digite a senha: \n");
	
	
	//recebe a chave para o hash
	string salt = "50";
	
	//variaveis para cria senhas para comparar
	char sT[6] = "guest";
	
	
	string crack = "aaaaaaaaaaaaa";


	crack = crypt(sT, salt);
		
	printf("senha: %s\n",sT);
	int c = 0;
	int i;
	for (i = 0; i < strlen(crack); i++)
	{
		 
		if (crack[i] == senha[i])
		{
			c++;
		}
	}
		
	if (c == i)
	{
		printf("%s\n",sT);
		printf("%s\n",crack);
		printf("creackeado\n");
	}else
	{
		printf("Inválida\n");
	}
	
	
	
	
	
}
