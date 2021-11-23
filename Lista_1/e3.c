/*
Objetivo: Ler  três notas de um aluno e retornar a média artimética tendo como peso, respectivamente:
n1 = 2, n2 = 3, n3 = 5




Autor: Lucas Gonçalves
******************************************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>




int
main(void)
{	
	//vetor para as notas
	float nota[3];
	float soma = 0;
	
	//le as notas e as soma para calcular a média posteriormente
	for(int i = 0; i <= 2; i++)
	{
		printf("Digite a %i º nota\n", i+1);
		scanf("%f", &nota[i]);
		if (i == 0)
		{
			soma = soma + (nota[i] *3) ;
		}else if (i == 1)
		{
			soma = soma + (nota[i] * 2);
		}else
		{
			soma = soma + (nota[i] * 5);
		}
		
	}
	
	//calculando a média
	float media;
	media = soma / (2+3+5);
	
	for(int i = 0; i <= 2; i++)
	{
		printf("%iª nota: %.2f\n", i+1, nota[i]);
	}
	printf("Média: %.2f\n", media);
	
	return 0;
	
}
