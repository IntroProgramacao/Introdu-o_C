/*
Objetivo: Fazer uma funçao que recebe o tempo de serviço em horas, minutos e segundos e converte em segundos.




Autor: Lucas Gonçalves
****************************************************************************************************************************************************/
#include <stdio.h>

//divide o valor recebido
void
fTempo(int tempo[3], int tem)
{
	for (int i = 2; i >= 0; i--)
	{
		if (i > 0)
		{
			
			//armazena o tempo separado em horas min e seg nas suas respectivas casas do array
			tempo[i] = tem % 100;
			tem = tem / 100;
		}else
		{
			//armazena o restante como horas dado o formato
			tempo[i] = tem;
		}		
	}
	
}

//recebe o tempo em horas minutos e segundos e converte para segundos
void
segCon(int tempo[3])
{
	tempo[0] = tempo[0] * 3600;
	tempo[1] = tempo[1] * 60;
	tempo[2] = tempo[2] + tempo[1] + tempo[0];
}


int
main(void)
{	
	//recebe o tempo
	int t;
	printf("Digite o tempo de trabalho no formato: 00h00m00s\n");
	scanf("%d", &t);
	
	//recebe as horas
	int tempo[3];
	/*tempo[0] = horas
	**tempo[1] = minutos
	**tempo[2] = segundos
	*/
	
	//chama a funcao que separa as unidades de tempo
	fTempo(tempo, t);
	
	//imprime o tempo digitado
	printf("O tempo digitado foi: \n");
	for (int i = 0; i <= 2; i++)
	{
		//formata a impressão das horas
		if (i == 0 && tempo[i] < 10)
		{
			printf("0%ih", tempo[i]);
		}else if(i == 0)
		{
			printf("%ih",tempo[i]);
		}
		//formata os minutos
		if (i == 1 && tempo[i] < 10)
		{
			printf("0%im", tempo[i]);
		}else if (i == 1)
		{
			printf("%im",tempo[i]);
		}
		//formata os segundos
		if (i == 2 && tempo[i] < 10)
		{
			printf("0%is", tempo[i]);
		}else if(i == 2)
		{
			printf("%is",tempo[i]);
		}
	}
	//chama a função que converte em segundos
	segCon(tempo);
	
	printf("\nO intervalo digitado equivale a: %i\n", tempo[2]);
	
	
	return 0;
	
	
	
}
