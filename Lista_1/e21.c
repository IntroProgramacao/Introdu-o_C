/*
Objetivo: Dados os seguintes dados sexo(0 feminino, 1 masculino), o algoritimo retorna:
a. a maior e a menor idade do grupo;
b. média da idade do grupo;
c. média da altura das mulheres;
d. média da idade dos homens;
e. percentual de pessoas com idade entre 18 e 35 anos (inclusive).




Autor: Lucas Gonçalves
****************************************************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int
main(void)
{
	/*<variaveis>*/
	//recebe o sexo, idade e altura
	float sexo, idade, alt;
	//armazena a maior e menor idade
	float idd[2] = {0,0}; //idd[0] menor idade, idd[1] maior idade
	//soma para media de idade, altura(mulheres), idade (homens), contador para 18 a 35, contador geral
	float somaIdd = 0, somaAlt = 0, somaIdH = 0, contper = 0, cont = 0, cont0 = 0, cont1 = 0;
	
	//faz as leituras e as operações
	do
	{
		//le o sexo
		printf("Digite o sexo: (0 - feminino, 1 - masculino)\n");
		scanf(" %f", &sexo);
		//faz a verificação para o sexo 
		if (sexo >= 0 && sexo <= 1)
		{
			// le a idade
			printf("Digite a idade:\n");
			scanf(" %f", &idade);
			somaIdd = somaIdd + idade;
			
			//le a altura
			printf("Digite a altura: \n");
			scanf(" %f", &alt);
			
			//pega a maior e a menor idade
			if (idd[0] == 0)
			{
				idd[0] = idade;
			}else if (idd[0] > idade)
			{
				idd[0] = idade;
			}
			if (idd[1] < idade)
			{
				idd[1] = idade;
			}
			//soma a altura do grupo feminino
			if (sexo == 0)
			{
				somaAlt = somaAlt + alt;
				cont0++;
				
			}else if (sexo == 1) //soma a idade dos homens
			{
				somaIdH = somaIdH + idade;
				cont1++;
			}
			
			//conta as pessoas com idade entre 18 e 35
			if (idade >= 18 && idade <= 35)
			{
				contper++;
			}
			cont++;
		}/*else
		{
			printf("sexo inválido!\n");
			exit(0);
		}*/
		
	} while (sexo >= 0 || cont == 1000);
	
	//media de idade do grupo
	float mediaIdd = somaIdd / cont;
	//media de altura
	float mediaAlt = somaAlt / cont0;
	//media idade homens
	float mediaIdH = somaIdH / cont1;
	//pecentual pessoas 18-35
	float percentual = (contper *100) / cont;
	
	printf("Menor idade do grupo: %.0f\n", idd[0]);
	printf("Maior idade do grupo: %.0f\n", idd[1]);
	
	printf("Idade média: %.2f\n", mediaIdd);
	printf("Altura média das mulheres: %.2f\n",mediaAlt);
	printf("Idade média dos homens: %.2f\n", mediaIdH);
	printf("Percentual de pessoas com idade entre 18 e 35 anos: %.0f\%\n", percentual);
	
	return 0;
	
}
