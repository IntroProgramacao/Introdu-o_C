/*Comparação das funções  do/while e while
**Um programa que lê 10 variáveis*/

#include<stdio.h>


int main(void)
{
    //recebe os valores
    int a[10];
    //contador
    int i = 0;

    //while que lê as variáveis
    while (i<10)
    {
        scanf("%d", a[i]);
        i++;
    }

    //zera o contador
    i = 0;

    do
    {
        scanf("%d", a[i]);
        i++;
    } while (i>=1 && i < 10);
    
    
    return 0;
}
