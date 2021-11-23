/*
Objetivo: Ler o nome a disciplina e as três notas de um aluno e retornar a média ponderada tendo como peso, respectivamente:
maior nota = 4 demais notas 3.




Autor: Lucas Gonçalves
******************************************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>




int
main(void)
{
	//le o nome e a disciplina do aluno
	int cod;
	printf("Digite o código do aluno: \n");
	scanf("%i", &cod);
	
	//vetor para as notas
	float nota[3];
	float soma = 0;
	
	//le as notas e as soma para calcular a média posteriormente
	for(int i = 0; i <= 2; i++)
	{
		printf("Digite a %i º nota\n", i+1);
		scanf("%f", &nota[i]);
	}
	
	//verifica qual das tres notas é a maior
	float maiornota = 0;
	for (int j = 1; j < 3; j++)
	{
		if (nota[j] > nota [j-1])
		{
			maiornota++;
		}
	}
	
	//calculando a média
	float media, nota1[3];
	for (int k = 0; k < 3; k++)
	{
		if (k == maiornota)
		{
			nota1[k] = nota[k] * 4;
		}else
		{
			nota1[k] = nota[k] * 3;
		}
		soma = soma + nota1[k];
	}
	
	media = soma / (4+3+3);
	
	printf("Aluno: %i\n",cod);
	
	for(int i = 0; i <= 2; i++)
	{
		
		printf("%iª nota: %.2f\n", i+1, nota[i]);
		if (i == 2)
		{
			printf("Média: %.2f\n", media);
		}
		if (media >= 5)
		{
			printf("APROVADO\n");
		}else
		{
			printf("REPROVADO\n");
			
		}
	}
	
	return 0;
	
}
