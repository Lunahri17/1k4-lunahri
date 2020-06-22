#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main()
{
	float x1,x2,y1,y2,a,b,d;
	
	printf("Ingrese la coordenada X de su Primer punto: ");
	scanf("%f",&x1);
	
	printf("Ingrese la coordenada Y de su Primer punto: ");
	scanf("%f",&y1);
	
	printf("\nIngrese la coordenada X de su Segundo punto: ");
	scanf("%f",&x2);
	
	printf("Ingrese la coordenada Y de su Segundo punto: ");
	scanf("%f",&y2);
	
	a=x2-x1;
	b=y2-y1;
	d=sqrt(pow(a,2)+pow(b,2));
	
	printf("\nLa distancia entre los puntos es: %.2f",d);

 	printf("\n\n");
	system("pause");
}

