/*
Objetivo: Converter minutos em horas, minutos e segundos




Autor: Lucas Gonçalves
******************************************************************************************************************************************/
#include <stdio.h>


int
main(void)
{
	//recebe os minutos
	printf("Digite os minutos para converção\n");
	float min;
	scanf("%f", &min);
	
	//converte para segundos
	int seg;
	seg = min * 60;
	
	//converte para horas
	int h;
	if (seg >= 3600)
	{
		h = seg / 3600;
		seg = seg % 3600;
		printf("%ih ", h);
		
	}
	
	//extrai os minutos
	int m;
	if (seg >= 60)
	{
		m = seg / 60;
		seg = seg % 60;
		printf("%im ", m);
	}
	
	//verifica se ainda existem segundos
	if (seg > 0)
	{
		printf("e %is\n", seg);
		
	}
	printf("\n");
	
	return 0;
}
