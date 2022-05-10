/*Objetivo: Algoritimo de quebra de senhas com bruteforce.

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
#include<time.h>
#include<unistd.h>
#define _XOPEN_SOURCE

/*recebe a chave para o hash
void sal(string senha, char salt[]){
		int i = 0;
		while(i<=2)
		{
			salt[i] = senha[i];
			i++;
		}
}*/


//incrementa a senha
void inc(int cont[], char sT[]){

	for (int i = 5; i >= 0; i--)
	{
		if (i == 5 && cont[i] < 25)
		{
			cont[i]++;
		}else if (cont[i] == 25)
		{
			cont[i] = 0;
			cont[i-1]++;
		}else if (i < 5)
		{
			if (cont[i] > 25)
			{
				cont[i] = 0;
				cont[i-1]++;
			}
		}
	}
	
	char alf[26];
	char p='a';
	for (int i = 0; i < 26; i++)
	{
		alf[i] = p;
		p++;
	}
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if (cont[i] == j+1)
			{
				sT[i] = alf[j];
			}
		}
	}
}


int
main(int argc, char *argv[])
{
	/*if (argc != 1 && argc != 2)
		{
			return 1;
		}
	//copia a string da linha de comando
	string senha = argv[1];*/
	
	string senha = get_string("digite a senha: \n");
	
	//recebe a chave para o hash
	string salt = "50";
	
	//variaveis para cria senhas para comparar
	//int cont[6] = {0,0,0,0,0,0};
	char sT[6] = "guest";
	
	bool crac;

	while(crac != true){
		//cria a senha
		//inc(cont, sT);

		printf("senha: %s\n",sT);
		
		if(crypt(sT, salt) == senha)
		{
			crac = true;
			printf("%i\n",crac);
			
		}else
		{
			crac = false;
			printf("invalido\n");
			
		}
		
	}
	
	printf("%s\n",sT);
	
		
	
}





















