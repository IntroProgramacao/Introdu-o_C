#include<stdio.h>

int main(void){
	/*variaveis*/
	int a;
	int i = 0;
	
	//solicita 10 entradas
	do{
		printf("Insira o %dº valor\n", i+1);
		scanf("%d", &a);
		i++;
	}while(i < 10)
}
