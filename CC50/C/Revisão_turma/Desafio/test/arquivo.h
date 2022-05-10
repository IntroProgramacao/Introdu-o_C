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
const int max = 100;

//cria um arquvo recebendo como paramentro o nome e o tipo do arquivo
FILE *creat(char *nome[MaxNome]);

//abre um arquivo e retorna um valor verdadeiro caso o aquivo exista
//void open(FILE *arq, char nome[max]);

//confirma a abertura retorna um valor verdadeiro caso o aquivo exista
//bool conf(char nome[max]);

//fecha o arquivo
//bool fecha(char nome[max]);
