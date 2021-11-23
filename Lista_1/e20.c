/*
Objetivo: Recebe o código de 200 cidades e seus respectivos estados junto do numero de carros em 2012 e o numero de acidentes em 2012 e retorna:
1: qual o maior e o menor índice de acidentes de trânsito e a que cidades
pertencem;
2: qual a média de veículos nas cidades brasileiras;
3: qual a média de acidentes com vítimas entre as cidades do Rio Grande do Sul.




Autor: Lucas Gonçalves
****************************************************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int
main(void)
{
	//contador para analisar quantas cidades foram lidas
	float cont = 0;
	
	//recebe o codigo da cidade
	float cod;
	
	//recebe a quantidade de veiculos
	float vei;
	
	//recebe o indice de acidentes em 2012
	float aci, soma = 0;
	
	//recebe o maior e menor indice de acidentes
	float idc[2] = {0,0}; //idc[0] = menor indice idc[1] maior indice
	
	//armazena a soma dos acidentes do rio grande do sul
	float somaRS = 0, contRS = 0;
	do
	{
		
		
		printf("Digite o código da cidade:\n");
		scanf(" %f", &cod);
		
		//verifica se é maior que 0 para continuar
		if (cod > 0)
		{
			
			printf("Digite o estado\n");
			char uf[2];
			scanf("%s", uf);
			
			//le a quantidade de veiculos
			printf("Digite a quantidade de veiculos\n");
			scanf(" %f", &vei);
			soma = soma + vei;
			
			//le o indice de acidente
			printf("Digite o indice de acidentes:\n");
			scanf(" %f", &aci);
			
			
			
			if (strcmp(uf, "rs") == 0)
			{
				somaRS = somaRS + aci;
				contRS++;
			}
		
			//armazena o maior e menor indice
			if (idc[0] == 0)
			{
				idc[0] = aci;
			}else if (idc[0] > aci)
			{
				idc[0] = aci;
			}
			if (idc[1] < aci)
			{
				idc[1] = aci;
			}
			
			cont++;
		}		
	}while (cont < 200);
	
	//calcula a media de veiculos
	float media;
	media = soma / cont;
		
	//calcula a media de acidentes no RS
	float mediaRS = somaRS / contRS;
	
	printf("A média de veiculos é: %.2f\n", media);
	printf("O maior indice de acidentes foi: %.2f\n", idc[1]);
	printf("O menor indice de acidentes foi: %.2f\n", idc[0]);
	printf("A media de acidentes no RS foi: %.2f\n", mediaRS);
	
	
	return 0;
	
}
