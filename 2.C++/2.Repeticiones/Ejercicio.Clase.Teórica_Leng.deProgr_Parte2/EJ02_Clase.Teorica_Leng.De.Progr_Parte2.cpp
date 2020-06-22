#include<stdio.h>
#include<stdlib.h>

main()
{
	int n,c,pfc=0;
	float x,y;
	
	printf("Ingrese la cantidad de puntos: ");
	scanf("%d",&n);
	
	for(c=0;c<n;c++)
	{
		printf("\nIngrese la coordenada X: ");
		scanf("%f",&x);
		
		printf("Ingrese la coordenada Y: ");
		scanf("%f",&y);
		
		if(x>=-3 and x<=3 and y>=-3 and y<=3)
		{
			printf("\nLa coordenada que ingreso se encuentra dentro del cuadrado\n");
			pfc=pfc+1;
		}
		else
		{
			printf("\nLa coordenada que ingreso se encuentra fuera del cuadrado\n");
		}
	}
	printf("\nCantidad de coordenadas dentro del cuadrado son: %d",pfc);
	
	printf("\n\n");
 	system("pause");
}
