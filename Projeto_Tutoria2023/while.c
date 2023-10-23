#include<stdio.h>

int main(void){
	/*variaveis*/
	int a;
	int i = 0;
	
	//solicita 10 entradas
	while(i < 10){
		
		printf("Insira o %dº valor\n", i+1);
		scanf("%d", &a);
		i++;
	}
}
