/*
Objetivo: Calcula os 20 primeiro primos dados 1, 2 e 3




Autor: Lucas Gonçalves
****************************************************************************************************************************************************/
#include <stdio.h>




int
main(void)
{
	int primo = 4, cont = 0, cont1 = 0;
	printf("1, 2, 3, ");
	while (cont <= 20)
	{
		if(primo % 2 != 0)
		{
		cont1 = 0;
			for (int i = 3; i < primo; i++)
			{
				if (primo % i != 0)
				{
					cont1++;
				}
			}
			if (cont1 == primo - 3)
			{
				printf("%i, ",primo);
				cont++;
			}
		}
		primo++;
	}
	printf("\n");
	
}
