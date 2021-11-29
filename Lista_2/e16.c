/*
Objetivo: função que retorna os 500 primeiros impares




Autor: Lucas Gonçalves
****************************************************************************************************************************************************/
#include <stdio.h>

void
impar(int vet[500])
{	
	int n = 1;
	for (int i = 0; i < 500;)
	{
		if (n % 2 != 0)
		{
			vet[i] = n;
			n++;
			i++;
		}else
		{
			n++;
		}
		
	}
}



int
main(void)
{	
	//vetor para armazenar os primeiros 500 primos
	int vet[500];
	
	impar(vet);
	
	
	for (int i = 0; i < 500; i++)
	{
		printf("%i\n", vet[i]);
		
	}
	return 0;
}
