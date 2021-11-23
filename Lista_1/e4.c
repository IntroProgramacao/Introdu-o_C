/*
Objetivo: Fazer um algoritimo que controla o tempo sem acidentes em uma empresa recebendo o tempo sem acidentes em dias e retornando o valo em dias meses e anos, assume-se que 1 ano possui 360dias e 1 mês possui 30dias




Autor: Lucas Gonçalves
******************************************************************************************************************************************/
#include <stdio.h>

//transforma dias em anos
int
anos(int d)
{
	int anos = 0;
	while (d >= 360)
	{
		d = d - 360;
		anos++;
	}
	return(anos);
}

//transforma dias em meses
int
meses(int d)
{
	int meses = 0;
	while (d >= 30)
	{
		d = d - 30;
		meses++;
	}
	return(meses);
}



int
main(void)
{
	//le a quantidade de dias sem acidentes
	int dia,mes, ano;
	printf("Digite o tempo sem acidentes: \n");
	scanf("%d", &dia);
	printf("Tempo sem acidente:\n");
	
	//chamando a funcao que converte em anos
	if (dia >= 360)
	{
		ano = anos(dia);
		//atualiza a quantidade de dias subtraindo pela quantidade de anos
		dia = dia - (ano * 360);
		
		//imprime tuto certinho
		if (ano > 1)
		{
			printf("%i anos, ", ano);
		}else
		{
			printf("%i ano, ", ano);
			
		}
	}
	if (dia >= 30)
	{
		mes = meses(dia);
		//atualiza a quantidade de dias subtraindo pela quantidade de meses
		dia = dia - (mes * 30);
		
		//imprime tuto certinho de novo
		if (mes > 1)
		{
			printf("%i meses, ", mes);
		}else
		{
			printf("%i mês, ", mes);
			
		}
	}
	//imprime tuto certinho
	//pow Heleno to merecendo um 10 viu
		if (dia > 1 && dia != 0)
		{
			printf("e %i dias ", dia);
		}else if (dia != 0)
		{
			printf("e %i dia ", dia);
			
		}
	
	printf("sem acidentes.\n");
	
		
}
