/*Objetivo: implementar a cifra de vigenere

																																										Bibliotecas:
cc50.h															
																																										Referências:
																																										*CC50(fundação estudar)
																																										Autor: Lucasitron
******************************************************************************************************************************************/
#include<cc50.h>
#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<strings.h>

//converte as letras em minusculo
void minusculo(string s1, string s2){
	for (int i = 0; i < strlen(s1); i++)
	{
		s2[i] = tolower(s1[i]);
	}
}

//converte em numeros
void numero(string s1, char alf[], int cod[]){
	for (int i = 0; i < strlen(s1); i++)
	{
		if (s1[i] >= 97 && s1[i] <= 122)
		{
			for (int j = 0; j < 26;)
			{
				if (s1[i] == alf[j])
				{
					cod[i] = j;
					j=26;
				}else
				{
					j++;
				}
			}
		}else
		{
			cod[i] = s1[i];
		}
	}
}

//converte em letras
void letra(int txtn[], char alf[], string texto){
	for (int i = 0; i < strlen(texto); i++)
	{
		if (txtn[i] >= 0 && txtn[i] <= 25)
		{
			for (int j = 0; j < 26;)
			{
				if (txtn[i] == j)
				{
					texto[i] = alf[j];
					j=26;
				}else
				{
					j++;
				}
			}
		}else
		{
			texto[i] = txtn[i];
		}
	}
}

int
main(int argc, char *argv[])
{
	//verifica a linha de comando
	if (argc != 1 && argc != 2)
		{
			return 1;
		}
	//verifica o input para chaves não alfabeticas
	string chave = argv[1];
	int ch = strlen(argv[1]); 
	for (int i = 0; i < ch; i++)
	{
		if ((chave[i] < 65 || chave[i] > 90) && (chave[i] < 97 || chave[i] > 122))
		{
			printf("error\n");
			
			exit(1);
		}
	}
	
	//converte a chave em minusculo
	string ch1 = chave;
	minusculo(chave, ch1);
	
	//recebe o texto para criptografica
	printf("Digite o texto: \n");
	string in;
	in = GetString();
	
	//converte em minusculo
	string texto = in;
	minusculo(in, texto);
	//armazena o tamanho da string
	int t = strlen(texto);
	
	//Conversão numérica

	//vetor alfabeto
	char alf[26];
	for (int i = 0; i < 26; i++)
	{
		char l = 'a';
		alf[i] = l + i;
	}
	
	//chave
	int cod[t];
	numero(ch1, alf, cod);
	int k[ch];
	//copia chave numérica para k
	for (int i = 0; i < ch; i++)
	{
		k[i] = cod[i];		
	}
	
	//limpa cod
	memset(&cod, 0, sizeof(cod));
	
	//texto
	numero(texto, alf, cod);
	//armazena o texto numerico
	int txtn[t];
	//copia o texto para txtn
	for (int i = 0; i < t; i++)
	{
		txtn[i] = cod[i];
	}
	
	//criptografia
	int j = 0;
	for (int i = 0; i < t; i++)
	{
		if (txtn[i] >=0 && txtn[i] <= 25)
		{
			if (txtn[i] + k[j] <= 25)
			{
				txtn[i] = txtn[i] + k[j];
			}else
			{
				int com = txtn[i] + k[j];
				txtn[i] = com - 26;
			}
			
			//zera ou incrementa j
			if (j + 1 == ch && txtn[i] + 1 < t - 1)
			{
				j = 0;
			}else
			{
				j++;
			}
		}
	}
	
	//convertendo em texto
	letra(txtn, alf, texto);
	
	printf("Texto criptografado:\n%s\n", texto);
	
	
	
	
	
	
	
	
}
