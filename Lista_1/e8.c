/*
Objetivo: Primeiramente salve Helenão, segundamente me passe tua receita de pudim aí..
No tutorial de hoje vamos aprender a dividir um valor em 3 parcelas iguais, depois de eu pagar meu cartão de crédito é claro..
não é em 3 parcelas iguais que bosta



Autor: Lucas Gonçalves
******************************************************************************************************************************************/
#include <stdio.h>
#include <math.h>



int
main(void)
{
	//recebe o valor a ser pago
	float pag;
	printf("Digite o valor a ser parcelado\n");
	scanf("%f", &pag);
	
	//recebe o valo de entrada e as parcelas
	float ent;
	int parc1, parc2;
	
	/*o int recebe apenas numeros inteiros ou seja desconsidera os numeros depois da virgula
	o que o torna uma boa estratégia para programas assim*/
	/*para esse problema eu optei por colar, e também por usar como parcelas 2 e 3
	o valor da divisão por tres, tratando-se de um int o valor será sempre inteiro*/
	parc1 = pag / 3;
	parc2 =  parc1;
	
	ent = pag - (parc1 + parc2);
	//imprimindo
	printf("Entrada:    R$%.2f\n1ª Parcela: R$%i.00\n2ª Parcela: R$%i.00\n", ent, parc1, parc2);
	
	
}
