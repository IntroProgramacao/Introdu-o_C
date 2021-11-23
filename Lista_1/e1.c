/*
Objetivo: Fazer um algoritimo que caucula a área de um trapésio, quadadrado/retângulo, circulo ou triângulo.
Sabendo que:
Trapésio a = ((base maior + base menor)* altura) / 2
quadrado/retângulo: a = base * altura
Circulo: a = p.(r*r)
Triangulo retângulo: a = base * altura / 2




Autor: Lucas Gonçalves
******************************************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>


// calcula a area do circulo
float
circulo(float r)
{
	//p=pi a=area
	float p = 3.14, a;
	a = p * (r*r);
	return(a);
}

//calcula a area do quadrado ou retangulo
float
qr(float b, float a)
{
	//calcula a area
	float area = b * a;
	return(area);
}

//calcula a area do trapésio
float
trapesio(float bma, float bme, float a)
{
	//calcula a area
	float area = ((bma + bme) * a)/2;
	return(area);
}

//calcula a area do triagulo
float
triangulo(float b, float a)
{
	//calcula a area
	float area = b * a /2;
	return(area);
}


int
main(int argc, char *argv[])
{
	//varifica o uso indevido, caso o usuário dê uma entrada diferente de 1 comando a mensagem é exibida.
	if (argc!= 1 && argc != 2)
	{
		printf("uso indevido!\n");
		printf("./l1-e1 forma para ser cauculada\n");
		printf("Formas suportadas: trapésio, quadrado/retângulo, circulo ou triângulo retângulo \n");	
	}
	char entrada[11];
	strcpy(entrada, argv[1]);
	//compara a entrada com uma das formas suportadas
	if (strcmp(entrada, "circulo") == 0)
	{
		//lê o raio
		printf("Dê o raio, distância entre o centro e a extrmidade, do circulo\n");
		float raio, area;
		scanf("%f", &raio);
		//chama a funcao
		area = circulo(raio);
		printf("Área = %.2f\n", area);
	}else if (strcmp(entrada, "quadrado") == 0 || strcmp(entrada, "retangulo") == 0)
	{
		//le a base e a altura
		float area, altura, base;
		printf("Dê o comprimento, base: \n");
		scanf("%f", &base);
		printf("Dê a largura, altura\n");
		scanf("%f", &altura);
		//chamando a funcao
		area = qr(base, altura);
		printf("%s\nÁrea = %.2f\n",entrada, area);
		
	}else if (strcmp(entrada, "trapésio") == 0)
	{
		//le a base maior, menor e a altura
		float area, altura, basemaior, basemenor;
		printf("Dê o comprimento da base maior: \n");
		scanf("%f", &basemaior);
		printf("Dê o comprimento da basemenor: \n");
		scanf("%f", &basemenor);
		printf("Dê a altura\n");
		scanf("%f", &altura);
		//chamando a funcao
		area = trapesio(basemaior,basemenor, altura);
		printf("Área = %.2f\n",entrada, area);
	}else if (strcmp(entrada, "triangulo") == 0)
	{
		//le a base e a altura
		float area, altura, base;
		printf("Dê o comprimento, base: \n");
		scanf("%f", &base);
		printf("Dê a largura, altura\n");
		scanf("%f", &altura);
		//chamando a funcao
		area = triangulo(base, altura);
		printf("%c\nÁrea = %.2f\n",entrada, area);
		
	}else
	{
		printf("%c, Forma indisponível!\n", entrada);
		
	}
	return 0;
}
