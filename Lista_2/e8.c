/*
Objetivo: Fazer uma funçao que recebe a media de um aluno por parametro e retora o conceito sendo:
0,0/4,9 = D
5,0/6,9 = C
7,0/8,9 = B
9 /10,0 = A
+18 = 6




Autor: Lucas Gonçalves
****************************************************************************************************************************************************/
#include <stdio.h>

char
cat(float id)
{
	char classe = 65;
	
	if (id >= 9 && id <= 10)
	{
		classe = 65;
	}else if (id >= 0 && id<= (float)4.9)
	{
		classe = 68;
	}else if (id >= 5 && id <= (float) 6.9)
	{
		classe = 67;
	}else if (id >= 7 && id <= (float) 8.9)
	{
		classe = 66;
	}

	return (classe);
}


int
main(void)
{
	printf("Digite a media do aluno: \n");
	float media;
	scanf(" %f", &media);
	char con = cat(media);
	printf("A categoria do nadador e: %c\n", con);	
	
}
