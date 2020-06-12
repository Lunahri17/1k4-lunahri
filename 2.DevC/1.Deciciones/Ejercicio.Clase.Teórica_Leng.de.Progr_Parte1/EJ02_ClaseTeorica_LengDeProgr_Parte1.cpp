#include <stdio.h>

float x,y;

main()
{
	printf("Ingresar valor de X: ");
	scanf("%f",&x);
	
	printf("\nIngresar valor de Y: ");
	scanf("%f",&y);
	
	if(x>=-3 and x<=3 and y>=-3 and y<=3)
	{
		printf("\nSe encuentra dentro del cuadrado.");
	}
	else
	{
		printf("\nSe encuentra fuera del cuadrado.");
	}
}
