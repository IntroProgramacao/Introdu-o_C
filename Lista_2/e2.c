/*
Objetivo: Implementar uma algoritimo que le 3 notas de um aluno e uma letra sendo:
a = media aritmetica
p = meida ponderada 
pesos 2, 3, 5




Autor: Lucas Gonçalves
****************************************************************************************************************************************************/
#include <stdio.h>

//calcula a media aritmentica
void
mAr(float nota[4])
{
	nota[3] = 0;
	for (int i = 0; i < 3; i++)
	{
		nota[3] = nota[3] + nota[i];
	}
	nota[3] = nota[3] / 3;
}

//calcula a media ponderada
void
mPo(float nota[4])
{
	//armazenda os pesos de cada nota
	int p[2] = {235, 0};
	nota[3] = 0;
	for (int i = 2; i >= 0; i--)
	{
		nota[3]  = nota[3] + (nota[i] * (p[0] % 10));
		p[1] = p[1] + (p[0] % 10);
		p[0] = p[0] /10;
	}
	nota[3] = nota[3]/p[1];
	
}


int
main(void)
{
	//recebe o valor das notas
	float nota[4];
	/*
	**nota[0] = nota 1
	**nota[1] = nota 2
	**nota[2] = nota 3
	**nota[3] = media*/
	
	for (int i = 0; i <= 2; i++)
	{
		//le as 3 notas
		printf("Digite a %iº nota: \n", i+1);
		scanf("%f", &nota[i]);
	}
	
	printf("Digite a qual media será calculada: \n");
	printf("(a) Média aritimetica - (p)Média Pronderada\n");
	char res;
	scanf(" %c", &res);
	
	//verifica a media a ser calculada
	if (res == 'a')
	{
		mAr(nota);
	}else if(res == 'p')
	{
		mPo(nota);
	}
	
	//imprimindo os valores
	for (int i = 0; i < 4; i++)
	{
		if (i < 3)
		{
			printf("%iº nota: %.2f\n",i+1, nota[i]);
		}else
		{
			printf("Media: %.2f\n", nota[i]);
			
		}
		
		
	}	
}
