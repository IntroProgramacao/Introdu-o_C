/*
Objetivo: Recebe um código que identifica a casa, o salário dessa casa o numeoro de filhos.




Autor: Lucas Gonçalves
******************************************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>



int
main(void)
{
	//informa como encerrar o programa
	printf("Para encerrar o programa digite um valor negativo para salário\n");
	sleep(1);
	system("clear");
	
	//Recebe as informações
	float sal, nfilhos;
	//recebe o maior salário
	float maiorsal = 0;
	//recebe a soma do salario, soma do numero de filhos, e faz as contagens
	float somasal = 0, somafil = 0, contsal = 0, contperc = 0, contfil = 0;
	do{
		printf("Digite o salário: \n");
		scanf("%f", &sal);
		
		//verifica se o salário é maior que 0  para continua
		if (sal >= 0)
		{
			//armazena o maior salario
			if (sal > maiorsal)
			{
				maiorsal = sal;
			}
			//conta os salarios abaixo de 100 reais
			if (sal <= 100)
			{
				contperc++;
			}
			somasal = somasal+ sal;
			contsal++;
			
			//recebe soma e faz a contagem do numero de filhos
			printf("Digite a quantidade de filhos: \n");
			scanf("%f", &nfilhos);
			somafil = somafil + nfilhos;
			contfil++;
			
		}
		
	}while(sal >= 0);
	
	//calcula as medias
	float medsal, medfi, perc;
	medsal = somasal / contsal;
	perc = (contperc * 100) / contsal;
	medfi = somafil / contfil;
	
	printf("Pessoas ouvidas: %.0f\n", contsal);
	printf("Média de salário: %.2f\n", medsal);
	printf("Média de filhos: %.2f\n", medfi);
	printf("Maior saĺário: %.2f\n", maiorsal);
	printf("Percentual de pessoal com salário menor que 100 reais: %.0f%\n", perc);
	return 0;
	
	
}
