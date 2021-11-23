/*
Objetivo: Criar um algoritimo de eleição cujo os votos seguem a seguinte regra:
Candidato a = 1
Candidato b = 2
Candidato c = 3
Voto nulo   = 4
Voto branco = 5

Qualquer voto fora desse intervalo será considerado como nulo.
O algoritimos é encerrado quando o valor 0 é digitado.



Autor: Lucas Gonçalves
****************************************************************************************************************************************************/
#include <stdio.h>

/*char
candidato(int n)
{
	char cand[5] = {CandidatoA, CandidatoB, CandidatoC, Nulo, Branco};
	return(cand[n])
}

*/
int
main(void)
{
	//armazena a contagem de cada voto
	int voto1[5] = {0,0,0,0,0};
	
	//inicia a leitura de votos
	int voto, quant = 0;
	do
	{
		//recebe o voto
		printf("Digite o codigo do Candidato\n");
		scanf("%d", &voto);
		
		//verifica se o voto recebe um valor maior que 0
		if (voto > 0)
		{
			//compara o voto com o vetor
			for (int i = 0; i < 5; i++)
			{
				if (voto - 1 == i )
				{
					voto1[i]++;
				}
			}
			if (voto > 5)
			{
				voto1[3]++;
			}
			quant++;
		}
	} while (voto > 0);
	
	//printa os votos
	printf("Total de votos: %i\n", quant);
	
	//retorna o candidato vencedor
	int soma = 0;
	for (int k = 1; k < 3; k++)
	{
		if (voto1[k] > voto1[k-1])
		{
			soma = k;
		}
	}
	
	if (voto1[0] != 0)
	{
		
		if (soma == 0)
		{
			printf("Candidato A: %i, VENCEDOR\n", voto1[0]);
			
		}else
		{
			printf("Candidato A: %i\n",voto1[0]);
		}
	}
	if (voto1[1] != 0)
	{
		if (soma == 1)
		{
			printf("Candidato B: %i, VENCEDOR\n",voto1[1]);
			
		}else
		{
			printf("Candidato B: %i\n",voto1[1]);
		}
	}
	if (voto1[2] != 0)
	{
		if (soma == 2)
		{
			printf("Candidato C: %i, VENCEDOR\n", voto1[2]);
			
		}else
		{
			printf("Candidato C: %i\n",voto1[2]);
		}
	}
	if (voto1[3] != 0)
	{
			printf("Nulo: %i\n",voto1[3]);
	}
	if (voto1[4] != 0)
	{
			printf("Brancos: %i\n",voto1[4]);
	}
	return 0;	
	
}
