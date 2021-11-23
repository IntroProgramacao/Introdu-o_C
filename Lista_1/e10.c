/*
Objetivo: Fazer algoritimo guloso que retorna a quantidade de notas a serem entregues em um saque.
notas disponiveis: 200,00, 100,00, 50,00, 20,00, 10,00, 5,00 e 2,00




Autor: Lucas Gonçalves
******************************************************************************************************************************************/
#include <stdio.h>


int
main(void)
{
	//recebe o valor do saque
	int valor;
	printf("Digite o valor a ser sacado, apenas valores inteiros\n");
	scanf("%i", &valor);
	
	//armazena a quantidade de notas a serem sacadas
	int saque[7] = {0,0,0,0,0,0,0};
	//armazena o valor de cada nota
	int nota[7] = {200, 100, 50, 20, 10, 5, 2};
	

	for (int i = 0; i < 7;)
	{
		if (valor >= nota[i])
		{
			valor = valor - nota[i];
			saque[i]++;
		}else
		{
			i++;
		}
	}
	for (int j = 0; j < 7; j++)
	{
		//verifica se o valor deve ser impresso se sim o imprime
		if (saque[j] >= 2)
		{
			printf("%i notas de %i\n", saque[j], nota[j]);
		}else if (saque[j] == 1)
		{
			printf("%i nota de %i\n", saque[j], nota[j]);
		}
	}
	return 0;
}
