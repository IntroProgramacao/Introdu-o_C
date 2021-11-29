/*
Objetivo: Implementar um algoritimo que lê tres comprimentos x,y,z varifica se os valores podem ser os lados de um triangulo e retorna o tipo de triangulo se os valores satisfazerem a seguinte propriedade.
lado n < (n1+n2) para qualquer n;
sendo os trinagulos:
1 - Triângulo Equilátero: os comprimentos dos 3 lados são iguais (retorna 1);
2 - Triângulo Isósceles: os comprimentos de 2 lados são iguais (retorna 2);
3 - Triângulo Escaleno: os comprimentos dos 3 lados são diferentes (retorna 3).




Autor: Lucas Gonçalves
****************************************************************************************************************************************************/
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <cc50.h>




#define true 1
#define false 0

bool
verTri(float lado[3])
{
	//conta os lados que satisfazem a propriedade dos triagulos
	int cont = 0;
	
	//retorna true para propriedade satisfeita e false para propriedade não satisfeita
	bool prop = false;
	
	//soma todos os lado para aplicar a propriedade
	int soma = lado[0] + lado[1] + lado[2];
	
	//aplica a propriedade
	for (int i = 0; i < 3; i++)
	{
		
		if (lado[i] < soma - lado[i])
		{
			cont++;
		}
	}
	if (cont == 3)
	{
		prop = 1;
	}else
	{
		prop = 0;
	}
	
	//retorna o valor
	return (prop);
}

//compara o tipo de triangulo
int
cTp(float lado[3])
{
	/*
	**1 Triângulo Equilátero
	**2 Triângulo Isósceles
	**3Triângulo Escaleno*/
	int tTri;
	
	if (lado[0] == lado[1] && lado[1] == lado[2])
	{
		tTri = 1;
	}else if (lado[0] == lado[1] || lado[1] == lado[2] || lado[0] == lado[2])
	{
		tTri = 2;
	}else if (lado[0] != lado[1] && lado[1] != lado[2] && lado[0] != lado[2])
	{
		tTri = 3;
	}
	
	//retorna o valor
	return (tTri);
}


int
main(void)
{
	//recebe os valores de comprimento
	float lado[3];
	/*lado[0] = x
	**lado[1] = y
	**lado[2] = z*/
	
	//le os valores
	for (int i = 0; i < 3; i++)
	{
		printf("Digite o %iº comprimento: \n", i);
		scanf("%f", &lado[i]);
	}
	
	//chama a funcao que aplica a propriedade e retorna 1 se a prop foi satisfeita e 0 para nao
	if (verTri(lado) == 0)
	{
		printf("valores invalidos\n");
		exit(1);
	}else
	{
		
	}
	
	//recebe o tipo de triangulo para impressao
	string tTrian[3] = {"Equilátero","Isósceles","Escaleno"};
	
	for (int j = 0; j < 3; j++)
	{
		if (cTp(lado) == j + 1)
		{
			printf("Triângulo %s\n", tTrian[j]);
			
		}
	}
	
	return 0;
}
