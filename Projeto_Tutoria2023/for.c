#include<stdio.h>

int main(void){
	/*variaveis*/
	int a;
	
	//solicita 10 entradas
	for(int i = 0; i < 10; i++){
		printf("Insira o %dº valor\n", i+1);
		scanf("%d", &a);
	}
}
