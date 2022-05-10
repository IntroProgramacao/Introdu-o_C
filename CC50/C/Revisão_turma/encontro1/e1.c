/*Objetivo:
Faça um algoritmo que calcule os 20 primeiros números primos, dados os três primeiros
1,2 e 3.

																																										Bibliotecas:
																		
																																										Referências:
																																										*CC50(fundação estudar)
																																										Autor: Lucasitron
******************************************************************************************************************************************/
#include<stdbool.h>
#include<stdio.h>


int
main(void){
	//recebe os valores em array
	int primo[20];
	primo[0] = 1;
	primo[1] = 2;
	primo[2] = 3;
	
	//booleano que identifica o  primo
	bool Vp = true;
	
	//que efetua a divisão do valor por cada valor menor que ele
	int div;
	
	//armazena a posição do vetor
	int i = 2;
	//armazena o valor
	int num = 4;
	
	//repete enquanto o vetor não estiver cheio
	while(i<20){
		//atualiza o valor do divisor
		div = 2;
		//atualiza o verificador
		Vp = true;
		
		//faz o módulo da divisão
		while (div<num && Vp)
		{
			if (num%div == 0)
			{
				//retorna falso se o modulo = 0
				Vp = false;
			}else
			{
				div++;
			}
		}
		
		if (Vp)
		{
			i++;
			primo[i] = num;
		}
			num++;
	}
	for (int i = 0; i < 20; i++){
	printf("%i\n", primo[i]);
			
	}

}
