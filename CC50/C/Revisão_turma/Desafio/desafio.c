/*Objetivo: Construir um programa em "C" que implementa uma agenda eletrônica. O programa deve ter um menu com as seguintes opções:
1- Gravar um nome na agenda
2- Imprimir na tela os dados de uma das pessoas cadastradas (consulta por nome)
3- Imprimir em um arquivo a lista dos nomes que começam pela letra indicada

																																										Bibliotecas:
cs50.h															
																																										Referências:
																																										*CC50(fundação estudar)
http://www.telecom.uff.br/~marcos/protocolos/www.cic.unb.br/docentes/jacobi/Extensao/ListaExerc.pdf																														
																																										Autor: Lucasitron
******************************************************************************************************************************************/
#include<cs50.h>
#include<stdio.h>
#include<stdlib.h>
#include "arquivo.h"

//tamanho maximo do nome do arquivo
#define max_arq 100
#define max_nome 25



int
main(int argc, char *argv[])
{

	/*******************************ABERTURA DO ARQUIVO******************************/
	//var para o nome do arquivo
	char nomeArq[max_arq]= "agenda.txt";
	
	//FILE tipo de variavel do arquivo
	FILE *file;
	
	//fopen abre o arquivo, "w" indica o tipo de abertura
	file = fopen(nomeArq, "r");
	
	//se o valor da var arquivo é NULL o arquivo não foi aberto
	if (file == NULL){
		printf("error\n");
		exit(1);
	}
	/*********************************************************************************/
	
	/***********************encontra um nome na agenda********************************/
	//recebe um nome para busca e o armazena
	string busca;
	busca = get_string("Digite um nome para busca");	
	
	int result;
	result = pArq(file,busca);
	printf("%i\n",result);
	
	
}
