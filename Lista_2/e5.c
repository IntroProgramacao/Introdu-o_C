/*
Objetivo: Fazer uma funçao que recebe a idade de um nadador por parametro e retora sua classe sendo:
5/7 = 1
8/10 = 2
11/13 = 4
14/17 = 5
+18 = 6




Autor: Lucas Gonçalves
****************************************************************************************************************************************************/
#include <stdio.h>

int
cat(int id)
{
	int classe, i= 5;
	/*[0] = classe1 ..*/
	for (int j = 1; j <= 4; j++)
	{
		if (id >= 18)
		{
			classe = 6;
			j = 4;
		}else if (id >= 14 && id<= 17)
		{
			classe = 5;
			j = 4;
		}else if (id >= i && id <= i+2)
		{
			classe = j;
			j = 4;
		}else
		{
			i=i+2;
		}
	}

	return (classe);
}


int
main(void)
{
	printf("Digite a idade do nadador: \n");
	int idade;
	scanf(" %d", &idade);
	
	printf("A categoria do nadador e: %i\n", cat(idade));	
	
}
