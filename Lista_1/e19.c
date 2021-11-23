/*
Objetivo: Fazer um algoritmo que recebe o sexo, idade e o sálario e retorna:
1: a media de salário de cada grupo
2: a maior e menor idade de cada grupo
3: o percentual de mulheres com salario abaixo de 100,00 reais

obs: o algoritimo está com um bug, ele fecha sozinho quando é inicializado, caso aconteça inicialize de novo.


Autor: Lucas Gonçalves
****************************************************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>





int
main(void)
{
	//variaveis que recebem as informações idade e salário
	float idade, salario;
	//vetores para maior menor idade de cada sexo e soma de salário
	float mIdF[2] = {0,0}, //mIdf[0] = menor idade, mIdF[1] = maior idade (Feminino)
	mIdM[2] = {0,0}, //mIdM[0] = menor idade, mIdM[1] = maior idade (Masculino)
	somaS[2] = {0,0}; //SomaS[0] = soma do salario Feminino, somaS[1] = soma do salario masculino.

	//recebe o sexo
	char sexo;
	//contador para cada sexo
	float m = 0, f = 0, perc = 0;
	
	//le as informações
	while (idade >= 0)
	{
		printf("Digite a idade:\n");
		scanf("%f", &idade);
		
		//verifica se idade>0
		if (idade > 0)
		{
			printf("Digite o sexo: (f)(m)\n");
			scanf("%s", &sexo);
			
			if (sexo != 'f' && sexo != 'm')
			{
				do
				{
					printf("Sexo inválido!\n");
					printf("Digite o sexo: (f)(m)\n");
					scanf("%s", &sexo);
				}while (sexo != 'f' || sexo != 'm');
			}
			
			//compara a idade para os contadores e somadores
			if (sexo == 'f' || sexo == 'F')
			{
				printf("Digite o salario: \n");
				scanf("%f", &salario);
				
				//verifica se o salário é menor que 100
				if (salario <= 100)
				{
					perc++;
				}
				
				//armazena o maior sexo feminino
				if (mIdF[0] < idade)
				{
					mIdF[0] = idade;
				}else if (mIdF[1] == 0)
				{
					//atualiza na primeira leitura
					mIdF[1] = idade;
					
				}else if (mIdF[1] > idade)
				{
					mIdF[1] = idade;
				}
				//soma para a media de salário
				somaS[0] = somaS[0] + salario;
				f++;		
			}else if (sexo == 'm' || sexo == 'M')
			{
				printf("Digite o salario: \n");
				scanf("%f", &salario);
				
				//compara a idade para armazenar a maior e a menor
				if (mIdM[0] < idade)
				{
					mIdM[0] = idade;
				}else if (mIdM[1] == 0)
				{
					//atualiza a primeira entrada
					mIdM[1] = idade;
				}else if (mIdM[1] > idade)
				{
					mIdM[1] = idade;
				}
				//soma para a media de salário
				somaS[1] = somaS[1] + salario;
				m++;		
			}
			
			
		}
		system("clear");
	}
	//calculando a média
	float mediaF = somaS[0] / f;
	float mediaM = somaS[1] / m;
	//calculando o percentual
	float percentual = (perc / f) * 100;
	system("clear");
	
	//printando as informações
	printf("Sexo(F) \t Sexo(M)\n");
	printf("\tMaior idade\n");
	printf("\t%.2f \t %.2f\n", mIdF[0], mIdM[0]);
	printf("\tMenor idade\n");
	printf("\t%.2f \t %.2f\n", mIdF[1], mIdM[1]);		
	printf("\tMédia de salário:\n");
	printf("\t%.2f \t %.2f\n",mediaF, mediaM);
	printf("Percentual de mulheres com salário inferior, igual a 100,00 reais:\n");
	printf("%.0f%\n", percentual);
	
	return 0;
}
