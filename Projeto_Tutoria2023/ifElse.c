#include<stdio.h>

int main(void){
	/*variaveis*/
	int a;
	char b;
	
	//leitura da variavel
	printf("Insira um inteiro: ");
	scanf("%d", &a);
	
	//verifica se par ou impar
	if(a%2 == 0){ 
		b = 'p';
		printf("Número Par\n");
	}else{
		b = 'i';
		printf("Número impar\n");
	}
	
	//retorno se é par ou impar
	if(a%2 == 0){
		printf("Número Par\n");
	}else{
		printf("Número impar\n");
	}

}
