/*Objetivo: Fazer um algoritimo que criptografa uma determinada frase com a crifra de cesar

																																									Bibliotecas:
																																			cc50.h
																																			string.h
																		
																																			Referências:
																																			*CC50(fundação estudar)
																																			*https://pt.wikipedia.org/wiki/Cifra_de_C%C3%A9sar
																																			
																																															▪️Lucasitron
******************************************************************************************************************************************/
#include<cc50.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<strings.h>



int
main(int argc, char *argv[])
{
	if (argc != 1 && argc != 3)
	{
		return 1;
	}
	
	//armazena o nome do arquivo
	string trec = argv[2];
	//recebe o arquivo .txt
	FILE *tNormal;
	tNormal = fopen(trec,"r");
	
	
	//pega a chave k
	int k = atoi(argv[1]);
	
	//interface usuário
	//recebe a frase
	char frase[1000];
	
	//le o arquivo para criptografalo
	fgets(frase, 500, tNormal);
	
	//armazena a frase criptografada
	string crip = frase;
	
	//recebe o tamanho da frase
	int tam = strlen(frase);
	
	//criptografa com a chave k
	for (int i = 0; i < tam; i++)
	{
		
		//verifica se e letra
		if (frase[i] >= 65 && frase[i]<= 90)
		{
			//verifica se a letra será depois de z
			if (frase[i] + k > 90)
			{
				//subtrai a distancia da letra até z de j
				int j;
				j = frase[i] + k;
				j = j - 90;
				crip[i] = 64 + j;
			}else
			{
				crip[i] = (frase[i] + k) % 26;
			}
		}else if (frase[i] >= 97 && frase[i] <= 122)
		{
			if (frase[i] + k > 122)
			{
				//subtrai a distancia da letra até z de j
				int j;
				j = frase[i] + k;
				j = j - 122;
				crip[i] = 96 + j;
			}else
			{
				crip[i] = frase[i] + k;
			}
		}
	}
	printf("%s\n", crip);
	
}						
