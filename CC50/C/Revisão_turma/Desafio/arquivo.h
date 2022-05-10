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
#define MaxN 25
//tamanho maximo que o arquivo poderá ter
const int max = 100;

int pArq(FILE *arqP, char pesquisa[MaxN]);
