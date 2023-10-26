//programa que calcula a area do circulo
// a = pi.r²

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#define pi 3.145


float area(float r);


int main(void){
    bool fim = 0;
    do{
        float raio;
        printf("Digite o valor do raio: \n");
        scanf("%f", &raio);

        if(raio == 0){
            fim = 1;
        }else{
            printf("Área = %f \n", area(raio));
    }
        
    }while(!fim);
}


float area(float r){
    float rQ = r*r;
    float a = rQ * pi;

    return(a);
}