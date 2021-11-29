/*
Objetivo: Lê uma quantidade indeterminada de numeros positivos encerra a leitura com uma entrada negativa e retorna a media dos numeros digitados




Autor: Lucas Gonçalves
****************************************************************************************************************************************************/
#include <stdio.h>




int
main(void)
{
	//recebe o valor
	int valor;
	
	//recebe a soma dos valores
	int soma = 0;
	
	//conta a quantidade de valores digitados
	int cont = 0;
	
	do
	{
		//le o valor
		printf("Digite um valor positivo\n");
		scanf("%d", &valor);
		if (valor > 0)
		{
			//soma o valor
			soma = soma + valor;
		
			//atualiza o contador
			cont++;
		}
		
	} while (valor > 0);
	
	//retorna a media
	float media;
	media = (float)soma / cont;
	
	printf("Média = %.2f\n", media);
	return(0);
}
