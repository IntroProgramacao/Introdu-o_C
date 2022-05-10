/************************************************************************************************************************

*creat(char nome[max], char typeOp)
*open(char nome[max])
*conf(char nome[max])
*fecha(char nome[max])

tipos de abertura:
"a" cria ou escreve caso já exista
"w" cria e caso ja exista sobrescreve
"r" leitura apenas, caso não exista retorna erro

Autor: Lucasitron
************************************************************************************************************************/
#include<stdbool.h>
#include<stdio.h>
#include <stdlib.h>

#define MaxNome 50

//tamanho maximo que o arquivo poderá ter
#define max 100

//cria um arquvo recebendo como paramentro o nome e o tipo do arquivo
FILE *creat(char *nome[MaxNome]){
	FILE *arq;
	//fopen abre o arquivo, "w" indica o tipo de abertura
	arq = fopen(nome, "w");
	
	//se o valor da var arquivo é NULL o arquivo não foi aberto
	if (arq == NULL){
	
		exit(1);
		
	}
	return arq;
}

//abre um arquivo e retorna um valor verdadeiro caso o aquivo exista
/*void open(FILE *arq, char nome[max]){
	//FILE tipo de variavel do arquivo
	FILE *file;
	
	//fopen abre o arquivo, "w" indica o tipo de abertura
	file = fopen(nome, "r");
	
	//se o valor da var arquivo é NULL o arquivo não foi aberto
	if (file == NULL){
		printf("error\n");
		
		exit(1);
		
	}*/
}
