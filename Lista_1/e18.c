/*
Objetivo: le um numero N e retorna o fatorial de n (N1)




Autor: Lucas Gonçalves
****************************************************************************************************************************************************/
#include <stdio.h>




int
main(void)
{
	printf("Digite o valor a ser fatorado: \n");
	int n;
	scanf("%d", &n);
	
	//fatora o numero
	long int fator = n;
	for (int i = n-1; i > 1; i--)
	{
		fator = fator * i;
	}
	printf("O fatorial de n (N!) é: %lld\n", fator);
	
}
