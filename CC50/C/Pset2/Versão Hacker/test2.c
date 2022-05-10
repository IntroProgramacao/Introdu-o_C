/*Objetivo: Fazer um laço de repetição simples.

																																										Bibliotecas:
																		
																																										Referências:
																																										*CC50(fundação estudar)
																																										Autor: Lucasitron
******************************************************************************************************************************************/
#include<stdio.h>
#include<stdlib.h>



int
main(int argc, char *argv[])
{
	char sT[6] = {'a','a','a','a','a','a'};

	for (int a = 0; a< 26; a++)
	{
		sT[0] = sT[0] + a;
		printf("%s\n",sT[0]);
		for (int b = 0; b< 26; b++)
		{
			sT[1] = sT[1] + b;
			printf("%s\n",sT[1]);
			for (int c = 0;c < 26; c++)
			{
				sT[2] = sT[2] + c;
				printf("%s\n",sT[2]);
				for (int d = 0; d < 26; d++)
				{
					sT[3] = sT[3] + d;
					printf("%s\n",sT[3]);
					for (int e = 0; e < 26; e++)
					{
						sT[4] = sT[4] + e;
						printf("%s\n",sT[4]);
						for (int f = 0; f < 26; f++)
						{
							sT[5] = sT[5] + f;
							printf("%s\n",sT[5]);
							
						}
					}
				}
			}
		}
	}
}

