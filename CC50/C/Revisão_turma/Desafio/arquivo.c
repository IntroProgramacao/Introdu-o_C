/************************************************************************************************************************

*pArq (FILE *arquivo)//retorna a linha pesquisa

Autor: Lucasitron
************************************************************************************************************************/
#include<stdbool.h>
#include<stdio.h>
#include <stdlib.h>

//tamanho maximo que o arquivo poderá ter
#define max 100
//tamanho maximo para o nome
#define MaxN 25

//Pesquisa um nome e retorna uma int que indica uma linha
int pArq(FILE *arqP, char pesquisa[MaxN]){
	//recebe o nome de uma linha
	char nome[MaxN];
	
	//copia o nome da linha enquanto o mesmo for diferente da pesquisa
	//recebe true quando o nome for encontrado
	bool enc = false;
	//recebe o valor da linha
	int linha = 1;
	do{
		//copia para a string
		fputs(arqP, nome);
		
		//compara
		if (nome == pesq)
		{
			enc = true;
		}else{
			linha++;
		}
	}while(!enc)
	
	return linha;
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
