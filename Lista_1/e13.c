/*
Objetivo: Le 10 numeros conta quantos estão no intervalo [10,20], quantos estão fora e retorna essas informações.




Autor: Lucas Gonçalves
******************************************************************************************************************************************/
#include <stdio.h>




int
main(void)
{
	/*<Lista de variaveis>*/
	//le o numeros
	int num;
	//conta os numeros dentro do intervalo e fora respectivamente
	int contd = 0, contf = 0;
	
	for (int i = 0; i < 10; i++)
	{
		printf("Digite o valor: \n");
		scanf("%d", &num);
		
		//verifica se está dentro ou fora do intervalo
		if (num >= 10 && num <= 20)
		{
			contd++;
		}else
		{
			contf++;
		}
	}
	printf("%i numeros dentro do intervalo\n", contd);
	printf("%i numeros fora do intervalo\n", contf);
	
}
